/**
* Universidad de La Laguna
* Proyecto: Roblockly
* Autor: Edwin Plasencia Hernández
* Email: alu0101329888@ull.edu.es
* Fecha: 17/05/2024
* Descripción: RobotMotionManager: Manager del movimiento de los robots, se encarga del movimiento de las ruedas y cuerpo principal
*/

using System.Collections;
using UnityEngine;

public class RobotMotionManager : MonoBehaviour {
    private float turnSpeed = 5.0f;             // Velocidad de giro del robot
    private float speedMultiplier = 750.0f;     // Multiplicador de velocidad del robot, debido al uso de Time.deltaTime, cualquier valor
                                                // por debajo de 600.0f, aproximadamente, no será suficiente para mover al robot.
                                                // No se puede eliminar la multiplicación por delta time o si no se tendrán robots
                                                // con diferente movimiento según el framerate
    private float brakeStrength = 30.0f;        // Fuerza de frenado del robot, a mayor valor más rápido se frena, por debajo de 30.0f el
                                                // frenado no es casi instantáneo y derrapes y resbalamientos pueden ocurrir.
    private int gridBlockSize = 16;

    // Variables donde guardaremos las ruedas, el eje de rotación de las ruedas (cada modelo es distinto, x, y o z) y si
    // valores positivos significan que las ruedas ruedan hacia delante o hacia detrás
    public GameObject frontLeftWheel;
    public GameObject frontRightWheel;
    public GameObject backLeftWheel;
    public GameObject backRightWheel;
    public string wheelMovementAxis;
    public bool positiveAxisIsForward;

    void Start() {}

    void Update() { // Calcula la velocidad a la que va el robot, la dirección a la que va, y usando wheelMovementAxis para saber
                    // qué eje rota las ruedas de manera correcta y positiveAxisIsForward para saber si valores positivos = rotar hacia delante,
                    // rota las ruedas cada tick correctamente.
        Vector3 resultingMovement = Vector3.zero;
        float forwardMovement = (transform.forward.x * GetComponent<Rigidbody>().velocity.x + transform.forward.z * GetComponent<Rigidbody>().velocity.z) / 10;
        if (!positiveAxisIsForward) {
            forwardMovement *= -1;
        }
        switch (wheelMovementAxis) {
            case "x":
                resultingMovement.x = forwardMovement;
                break;
            case "y":
                resultingMovement.y = forwardMovement;
                break;
            case "z":
                resultingMovement.z = forwardMovement;
                break;
        }
        frontLeftWheel.transform.Rotate(resultingMovement);
        frontRightWheel.transform.Rotate(resultingMovement);
        backLeftWheel.transform.Rotate(resultingMovement);
        backRightWheel.transform.Rotate(resultingMovement);
    }

    public IEnumerator MoveForward(int speed) { // Mueve el robot hacia delante dada una velocidad usando una fuerza si está en el suelo
        while (!Physics.Raycast(transform.position, Vector3.down, out RaycastHit hitInfo, 6, LayerMask.GetMask("Default"))) {
            yield return null;
        }
        GetComponent<Rigidbody>().AddForce(transform.forward * speedMultiplier * speed * Time.deltaTime, ForceMode.Force);
        yield return null;
    }

    public IEnumerator MoveBackwards(int speed) { // Mueve el robot hacia detrás dada una velocidad usando una fuerza si está en el suelo
        while (!Physics.Raycast(transform.position, Vector3.down, out RaycastHit hitInfo, 6, LayerMask.GetMask("Default"))) {
            yield return null;
        }
        GetComponent<Rigidbody>().AddForce(-transform.forward * speedMultiplier * speed * Time.deltaTime, ForceMode.Force);
        yield return null;
    }

    public IEnumerator MoveForwardBlocks(int speed, int blocks) {
        for (int i = 0; i < blocks; i++) {
            while (!Physics.Raycast(transform.position, Vector3.down, out RaycastHit hI, 6, LayerMask.GetMask("Default"))) {
                yield return null;
            }
            if (!Physics.Raycast(transform.position, transform.forward, out RaycastHit hitInfo, gridBlockSize, LayerMask.GetMask("Default"))) {
                Vector3 prevPos = transform.position;
                Quaternion prevRot = transform.rotation;
                while (Vector3.Distance(transform.position, prevPos + transform.forward * gridBlockSize) > 2.0f) {
                    GetComponent<Rigidbody>().AddForce(transform.forward * speedMultiplier * speed * Time.deltaTime, ForceMode.Force);
                    yield return null;
                }
                transform.position = prevPos + transform.forward * gridBlockSize;
                transform.rotation = prevRot;
                GetComponent<Rigidbody>().velocity = Vector3.zero;
                GetComponent<Rigidbody>().angularVelocity = Vector3.zero;
                yield return null;
            }
        }
        yield return null;
    }

    public IEnumerator MoveBackwardBlocks(int speed, int blocks) {
        for (int i = 0; i < blocks; i++) {
            while (!Physics.Raycast(transform.position, Vector3.down, out RaycastHit hI, 6, LayerMask.GetMask("Default"))) {
                yield return null;
            }
            if (!Physics.Raycast(transform.position, -transform.forward, out RaycastHit hitInfo, gridBlockSize, LayerMask.GetMask("Default"))) {
                Vector3 prevPos = transform.position;
                Quaternion prevRot = transform.rotation;
                while (Vector3.Distance(transform.position, prevPos + -transform.forward * gridBlockSize) > 2.0f) {
                    GetComponent<Rigidbody>().AddForce(-transform.forward * speedMultiplier * speed * Time.deltaTime, ForceMode.Force);
                    yield return null;
                }
                transform.position = prevPos + -transform.forward * gridBlockSize;
                transform.rotation = prevRot;
                GetComponent<Rigidbody>().velocity = Vector3.zero;
                GetComponent<Rigidbody>().angularVelocity = Vector3.zero;
                yield return null;
            }
        }
        yield return null;
    }

    public IEnumerator MoveForwardTime(int speed, float time) { // Mueve el robot hacia delante dada una velocidad y una duración usando una fuerza si está en el suelo
        float timer = 0f;
        while (!Physics.Raycast(transform.position, Vector3.down, out RaycastHit hitInfo, 6, LayerMask.GetMask("Default"))) {
            yield return null;
        }
        while (timer < time) {

            GetComponent<Rigidbody>().AddForce(transform.forward * speedMultiplier * speed * Time.deltaTime, ForceMode.Force);
            timer += Time.deltaTime;
            yield return null;
        }
        yield return null;
    }

    public IEnumerator MoveBackwardsTime(int speed, float time) { // Mueve el robot hacia atrás dada una velocidad y una duración usando una fuerza si está en el suelo
        float timer = 0f;
        while (!Physics.Raycast(transform.position, Vector3.down, out RaycastHit hitInfo, 6, LayerMask.GetMask("Default"))) {
            yield return null;
        }
        while (timer < time) {
            GetComponent<Rigidbody>().AddForce(-transform.forward * speedMultiplier * speed * Time.deltaTime, ForceMode.Force);
            timer += Time.deltaTime;
            yield return null;
        }
        yield return null;
    }

    public IEnumerator Turn(string direction) { // Rota 90 grados el robot dada la dirección de forma suave (Slerp)
        Quaternion goal;
        if (direction == "LEFT") {
            goal = Quaternion.Euler(0, -90, 0) * GetComponent<Rigidbody>().rotation;
        } else {
            goal = Quaternion.Euler(0, 90, 0) * GetComponent<Rigidbody>().rotation;
        }
        while (Quaternion.Angle(GetComponent<Rigidbody>().rotation, goal) > 1.0f) {
            GetComponent<Rigidbody>().MoveRotation(Quaternion.Slerp(GetComponent<Rigidbody>().rotation, goal, Time.deltaTime * turnSpeed));
            yield return null;
        }
        GetComponent<Rigidbody>().MoveRotation(goal);
        yield return null;
    }

    public IEnumerator TurnAngle(float angle) { // Rota el robot un número de grados proporcionado de forma suave (Slerp)
        Quaternion goal = Quaternion.Euler(0, angle, 0) * GetComponent<Rigidbody>().rotation;
        while (Quaternion.Angle(transform.rotation, goal) > 1.0f) {
            GetComponent<Rigidbody>().MoveRotation(Quaternion.Slerp(GetComponent<Rigidbody>().rotation, goal, Time.deltaTime * turnSpeed));
            yield return null;
        }
        GetComponent<Rigidbody>().MoveRotation(goal);
        yield return null;
    }

    public IEnumerator BrakeUntilStopped() { // Reducimos la velocidad en el eje x y z del robot hasta estar parados, no modificamos la velocidad
                                             // directamente o el valor en el eje y ya que frenaríamos la caída del robot lo cual no tiene sentido.
        Vector3 slowedDownVelocity = GetComponent<Rigidbody>().velocity;
        while (GetComponent<Rigidbody>().velocity.x > 0.5f || GetComponent<Rigidbody>().velocity.z > 0.5f) {
            slowedDownVelocity = GetComponent<Rigidbody>().velocity;
            slowedDownVelocity.x = Mathf.Lerp(GetComponent<Rigidbody>().velocity.x, 0, brakeStrength * Time.deltaTime);
            slowedDownVelocity.z = Mathf.Lerp(GetComponent<Rigidbody>().velocity.z, 0, brakeStrength * Time.deltaTime);
            GetComponent<Rigidbody>().velocity = slowedDownVelocity;
            yield return null;
        }
        slowedDownVelocity.x = 0;
        slowedDownVelocity.z = 0;
        GetComponent<Rigidbody>().velocity = slowedDownVelocity;
        yield return null;
    }
}
