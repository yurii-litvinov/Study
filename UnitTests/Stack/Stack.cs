namespace StackNamespace
{
    /// <summary>
    /// Stack based on references.
    /// </summary>
    public class Stack
    {
        private class StackElement
        {
            private int aValue;

            public int Value 
            {
                get
                {
                    return aValue;
                }

                set
                {
                    if (value < 0)
                    {
                        this.aValue = 0;
                    }
                    else
                    {
                        this.aValue = value;
                    }
                }
            }

            public StackElement Next { get; set; }
        }

        private StackElement head = null;

        /// <summary>
        /// Push value to a stack.
        /// </summary>
        /// <param name="value">Value to be pushed.</param>
        public void Push(int value)
        {
            var newElement = new StackElement()
            {
                Next = head,
                Value = value
            };

            head = newElement;
        }

        public int Pop()
        {
            if (head == null)
            {
                return -1;
            }

            var temp = head.Value;
            head = head.Next;
            return temp;
        }

        public bool IsEmpty()
        {
            return head == null;
        }
    }
}
