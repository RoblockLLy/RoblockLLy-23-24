using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UBlockly {
    [CodeInterpreter(BlockType = "sensors_touch_contact")]
    public class Detection_Sensor_Touch_Contact_Cmdtor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            string sensorPosition = block.GetFieldValue("POSITION");
            GameObject selectedRobot = VaultManager.vaultInstance.getObject(id_given);
            bool data = selectedRobot.GetComponent<RobotManager>().GetSensorReading(sensorPosition, "contact") == "True";
            ReturnData(new DataStruct(data));
        }
    }

    [CodeInterpreter(BlockType = "sensors_touch_not_contact")]
    public class Detection_Sensor_Touch_Not_Contact_Cmdtor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;


            string sensorPosition = block.GetFieldValue("POSITION");
            GameObject selectedRobot = VaultManager.vaultInstance.getObject(id_given);
            bool data = selectedRobot.GetComponent<RobotManager>().GetSensorReading(sensorPosition, "contact") == "False";
            ReturnData(new DataStruct(data));
        }
    }

    [CodeInterpreter(BlockType = "sensors_ir_detect_white")]
    public class Detection_Sensor_IR_White_Cmdtor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            string sensorPosition = block.GetFieldValue("POSITION");
            GameObject selectedRobot = VaultManager.vaultInstance.getObject(id_given);
            bool data = selectedRobot.GetComponent<RobotManager>().GetSensorReading(sensorPosition, "infrared") == "True";
            ReturnData(new DataStruct(data));
        }
    }

    [CodeInterpreter(BlockType = "sensors_ir_detect_black")]
    public class Detection_Sensor_IR_Black_Cmdtor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            string sensorPosition = block.GetFieldValue("POSITION");
            GameObject selectedRobot = VaultManager.vaultInstance.getObject(id_given);
            bool data = selectedRobot.GetComponent<RobotManager>().GetSensorReading(sensorPosition, "infrared") == "False";
            ReturnData(new DataStruct(data));
        }
    }

    [CodeInterpreter(BlockType = "sensors_color_detect_colors")]
    public class Detection_Sensor_Color_Colors_Cmdtor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            string sensorPosition = block.GetFieldValue("POSITION");
            string colorToFind = block.GetFieldValue("COLOR");
            GameObject selectedRobot = VaultManager.vaultInstance.getObject(id_given);
            bool data = selectedRobot.GetComponent<RobotManager>().GetSensorReading(sensorPosition, "color") == colorToFind;
            ReturnData(new DataStruct(data));
        }
    }

    [CodeInterpreter(BlockType = "sensors_us_distance")]
    public class Detection_Sensor_US_Detection_Cmdtor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            string sensorPosition = block.GetFieldValue("POSITION");
            GameObject selectedRobot = VaultManager.vaultInstance.getObject(id_given);
            float data = float.Parse(selectedRobot.GetComponent<RobotManager>().GetSensorReading(sensorPosition, "ultrasound"));
            ReturnData(new DataStruct(data));
        }
    }

    [CodeInterpreter(BlockType = "sensors_gyroscope_still")]
    public class Detection_Sensor_Gyroscope_Still_Cmdtor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            GameObject selectedRobot = VaultManager.vaultInstance.getObject(id_given);
            bool data = selectedRobot.GetComponent<RobotManager>().GetSensorReading("internalSensor1", "gyroscope") == "still";
            ReturnData(new DataStruct(data));
        }
    }

    [CodeInterpreter(BlockType = "sensors_gyroscope_direction")]
    public class Detection_Sensor_Gyroscope_Direction_Cmdtor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            string robotDirection = block.GetFieldValue("DIRECTION");
            GameObject selectedRobot = VaultManager.vaultInstance.getObject(id_given);
            bool data = selectedRobot.GetComponent<RobotManager>().GetSensorReading("internalSensor1", "gyroscope") == robotDirection;
            ReturnData(new DataStruct(data));
        }
    }
}
