using System;
using System.Collections.Generic;

namespace FSM
{
    class FSM
    {
        private List<Enum> States = new List<Enum>();

        Enum currentState;

        public FSM(Enum initial)
        {
            currentState = initial;
        }

        public bool AddState(Enum state)
        {
            if(States.Contains(state))
            {
                Console.WriteLine("Can not add a state that's already added.");
                return false;
            }
            States.Add(state);
            return true;
        }

        public void Info()
        {
            Console.WriteLine("Finate state machine is comprised of...");
            int count = 0;
            foreach (Enum s in States)
            {
                Console.WriteLine("State " + count.ToString() + ": " + s.ToString());
                count++;
            }
        }

        public bool AddTransition(Enum from, Enum to)
        {
            Console.WriteLine("New valid transition: " + from + " to " + to);
            return true;
        }

    }

    class Program
    {
        enum PlayerStates
        {
            init, idle, walk, run,
        }

        static void Main(string[] args)
        {
            FSM fsm = new FSM(PlayerStates.init);
            

            //init->idle
            //idle->walk
            //walk->run
            //run->walk
            //walk->idle

            fsm.AddState(PlayerStates.init);
            fsm.AddState(PlayerStates.idle);
            fsm.AddState(PlayerStates.walk);
            fsm.AddState(PlayerStates.run);
            fsm.AddState(PlayerStates.run);
            fsm.AddState(PlayerStates.run);

            fsm.Info();

            fsm.AddTransition(PlayerStates.init, PlayerStates.idle);
            fsm.AddTransition(PlayerStates.idle, PlayerStates.walk);
            fsm.AddTransition(PlayerStates.walk, PlayerStates.run);
            fsm.AddTransition(PlayerStates.run, PlayerStates.walk);
            fsm.AddTransition(PlayerStates.walk, PlayerStates.idle);

           
            Console.ReadLine();
        }
    }
}
