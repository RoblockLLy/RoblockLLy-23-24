using System.Collections;

namespace UBlockly {
    [CodeInterpreter(BlockType = "comms_set_color")]
    public class Comms_Set_Color_CmdTor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;
            string group = block.GetFieldValue("COLOR");

            CommsManager.commsManager.SetGroup(id_given, group);

            yield return null;
        }
    }

    [CodeInterpreter(BlockType = "comms_send_color")]
    public class Comms_Send_Color_CmdTor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;
            ctor = CSharp.Interpreter.ValueReturn(block, "SIGNAL", new DataStruct());
            yield return ctor;
            string name = ctor.Data.StringValue;
            string group = block.GetFieldValue("COLOR");

            Signal signal = new Signal(name, SignalType.Group, id_given, group);
            CommsManager.commsManager.AddSignal(signal);

            yield return null;
        }
    }

    [CodeInterpreter(BlockType = "comms_send_robot")]
    public class Comms_Send_Robot_CmdTor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;
            ctor = CSharp.Interpreter.ValueReturn(block, "SIGNAL", new DataStruct());
            yield return ctor;
            string name = ctor.Data.StringValue;
            ctor = CSharp.Interpreter.ValueReturn(block, "ROBOT", new DataStruct());
            yield return ctor;
            string robot = ctor.Data.StringValue;

            Signal signal = new Signal(name, SignalType.Robot, id_given, robot);
            CommsManager.commsManager.AddSignal(signal);

            yield return null;
        }
    }

    [CodeInterpreter(BlockType = "comms_send_broadcast")]
    public class Comms_Send_Broadcast_CmdTor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;
            ctor = CSharp.Interpreter.ValueReturn(block, "SIGNAL", new DataStruct());
            yield return ctor;
            string name = ctor.Data.StringValue;

            Signal signal = new Signal(name, SignalType.Broadcast, id_given);
            CommsManager.commsManager.AddSignal(signal);

            yield return null;
        }
    }

    [CodeInterpreter(BlockType = "comms_receive_color")]
    public class Comms_Receive_Color_CmdTor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;
            ctor = CSharp.Interpreter.ValueReturn(block, "SIGNAL", new DataStruct());
            yield return ctor;
            string name = ctor.Data.StringValue;

            ReturnData(new DataStruct(CommsManager.commsManager.ReceivedGroupSignal(name, id_given)));
        }
    }

    [CodeInterpreter(BlockType = "comms_receive_robot")]
    public class Comms_Receive_Robot_CmdTor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;
            ctor = CSharp.Interpreter.ValueReturn(block, "SIGNAL", new DataStruct());
            yield return ctor;
            string name = ctor.Data.StringValue;
            ctor = CSharp.Interpreter.ValueReturn(block, "ROBOT", new DataStruct());
            yield return ctor;
            string sender = ctor.Data.StringValue;

            ReturnData(new DataStruct(CommsManager.commsManager.ReceivedRobotSignal(name, sender, id_given)));
        }
    }

    [CodeInterpreter(BlockType = "comms_receive_broadcast")]
    public class Comms_Receive_Broadcast_CmdTor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;
            ctor = CSharp.Interpreter.ValueReturn(block, "SIGNAL", new DataStruct());
            yield return ctor;
            string name = ctor.Data.StringValue;

            ReturnData(new DataStruct(CommsManager.commsManager.ReceivedBroadcastSignal(name, id_given)));
        }
    }

    [CodeInterpreter(BlockType = "comms_clear_recent_color")]
    public class Comms_Clear_Recent_Color_CmdTor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            CommsManager.commsManager.RemoveRecentSignalGroup(id_given);

            yield return null;
        }
    }

    [CodeInterpreter(BlockType = "comms_clear_recent_robot")]
    public class Comms_Clear_Recent_Robot_CmdTor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            CommsManager.commsManager.RemoveRecentSignalRobot(id_given);

            yield return null;
        }
    }

    [CodeInterpreter(BlockType = "comms_clear_recent")]
    public class Comms_Clear_Recent_CmdTor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CommsManager.commsManager.RemoveRecentSignal();

            yield return null;
        }
    }

    [CodeInterpreter(BlockType = "comms_clear_all_color")]
    public class Comms_Clear_All_Color_CmdTor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            CommsManager.commsManager.RemoveAllSignalsGroup(id_given);

            yield return null;
        }
    }

    [CodeInterpreter(BlockType = "comms_clear_all_robot")]
    public class Comms_Clear_All_Robot_CmdTor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CmdEnumerator ctor = CSharp.Interpreter.ValueReturn(block, "ID", new DataStruct());
            yield return ctor;
            string id_given = ctor.Data.StringValue;

            CommsManager.commsManager.RemoveAllSignalsRobot(id_given);

            yield return null;
        }
    }

    [CodeInterpreter(BlockType = "comms_clear")]
    public class Comms_Clear_All_CmdTor : EnumeratorCmdtor {
        protected override IEnumerator Execute(Block block) {
            CommsManager.commsManager.RemoveAllSignals();

            yield return null;
        }
    }
}
