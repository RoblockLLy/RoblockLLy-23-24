using System.Collections;
using UnityEngine;

namespace UBlockly
{
    [CodeInterpreter(BlockType = "move_robot_forward")]
    public class Move_Forward_Robot_Cmdtor : EnumeratorCmdtor{
        protected override IEnumerator Execute(Block block){
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            int speed = int.Parse(block.GetFieldValue("SPEED"));

            GameObject robot = VaultManager.vaultInstance.getObject(id_given);
        
            yield return robot.GetComponent<RobotMotionManager>().MoveForward(speed);
        }
    }
    [CodeInterpreter(BlockType = "move_robot_backward")]
    public class Move_Backward_Robot_Cmdtor : EnumeratorCmdtor{
        protected override IEnumerator Execute(Block block){
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            int speed = int.Parse(block.GetFieldValue("SPEED"));

            GameObject robot = VaultManager.vaultInstance.getObject(id_given);

            yield return robot.GetComponent<RobotMotionManager>().MoveBackwards(speed);
        }
    }

    [CodeInterpreter(BlockType = "move_robot_forward_blocks")]
    public class Move_Forward_Robot_Blocks_Cmdtor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            int speed = int.Parse(block.GetFieldValue("SPEED"));
            int blocks = int.Parse(block.GetFieldValue("DISTANCE"));

            GameObject robot = VaultManager.vaultInstance.getObject(id_given);

            yield return robot.GetComponent<RobotMotionManager>().MoveForwardBlocks(speed, blocks);
        }
    }
    [CodeInterpreter(BlockType = "move_robot_backward_blocks")]
    public class Move_Backward_Robot_Blocks_Cmdtor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            int speed = int.Parse(block.GetFieldValue("SPEED"));
            int blocks = int.Parse(block.GetFieldValue("DISTANCE"));

            GameObject robot = VaultManager.vaultInstance.getObject(id_given);

            yield return robot.GetComponent<RobotMotionManager>().MoveBackwardBlocks(speed, blocks);
        }
    }

    [CodeInterpreter(BlockType = "move_robot_forward_time")]
    public class Move_Forward_Time_Robot_Cmdtor : EnumeratorCmdtor{
        protected override IEnumerator Execute(Block block){
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            int speed = int.Parse(block.GetFieldValue("SPEED"));
            float time = float.Parse(block.GetFieldValue("TIME"));

            GameObject robot = VaultManager.vaultInstance.getObject(id_given);

            yield return robot.GetComponent<RobotMotionManager>().MoveForwardTime(speed, time);
        }
    }

    [CodeInterpreter(BlockType = "move_robot_backward_time")]
    public class Move_Backward_Time_Robot_Cmdtor : EnumeratorCmdtor{
        protected override IEnumerator Execute(Block block){
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            int speed = int.Parse(block.GetFieldValue("SPEED"));
            float time = float.Parse(block.GetFieldValue("TIME"));

            GameObject robot = VaultManager.vaultInstance.getObject(id_given);

            yield return robot.GetComponent<RobotMotionManager>().MoveBackwardsTime(speed, time);
        }
    }

    [CodeInterpreter(BlockType = "move_turn_robot")]
    public class Turn_Robot_Cmdtor : EnumeratorCmdtor{
        protected override IEnumerator Execute(Block block)
        {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            string direction = block.GetFieldValue("DIRECTION");

            GameObject robot = VaultManager.vaultInstance.getObject(id_given);

            yield return robot.GetComponent<RobotMotionManager>().Turn(direction);
        }
    }

    [CodeInterpreter(BlockType = "move_turn_robot_angle")]
    public class Turn_Robot_Angle_Cmdtor : EnumeratorCmdtor{
        protected override IEnumerator Execute(Block block)
        {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            float angle = float.Parse(block.GetFieldValue("ANGLE"));

            GameObject robot = VaultManager.vaultInstance.getObject(id_given);

            yield return robot.GetComponent<RobotMotionManager>().TurnAngle(angle);
        }
    }

    [CodeInterpreter(BlockType = "move_stop_robot")]
    public class Stop_Robot_Cmdtor : EnumeratorCmdtor{
        protected override IEnumerator Execute(Block block)
        {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            GameObject robot = VaultManager.vaultInstance.getObject(id_given);

            yield return robot.GetComponent<RobotMotionManager>().BrakeUntilStopped();
        }
    }

}
