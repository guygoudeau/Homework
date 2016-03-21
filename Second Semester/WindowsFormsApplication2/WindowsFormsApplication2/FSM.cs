using System;
using System.Collections.Generic;
using System.Linq;

namespace FinateStateMachine
{
    struct Link<T>
    {
        public T from;
        public T to;
    }

    class FSM<T>
    {
        private Dictionary<T, List<Link<T>>> dict = new Dictionary<T, List<Link<T>>>();

        T currentState;

        public FSM(T initial)
        {
            AddState(initial);
            currentState = initial;
        }

        public bool AddState(T state)
        {
            if (dict.ContainsKey(state))
            {
                return false;
            }
            dict.Add(state, new List<Link<T>>());
            return true;
        }

        public bool AddTransition(T from, T to)
        {
            Link<T> lin = new Link<T>();
            lin.from = from;
            lin.to = to;
            if (dict[from].Contains(lin))
            {
                return false;
            }
            dict[from].Add(lin);
            return true;
        }

        public T Switch(T to)
        {
            Link<T> temp = new Link<T>();
            temp.from = currentState;
            temp.to = to;
            foreach (Link<T> l in dict[currentState])
            {
                if (l.Equals(temp))
                {
                    currentState = to;
                    return currentState;
                }
            }
            return currentState;
        }
    }
}
