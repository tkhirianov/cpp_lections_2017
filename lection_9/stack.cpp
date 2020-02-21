struct Stack
{
    double *s;
    int allocated; // bytes allocated to stack
    int top;

    Stack(int max_size=100) // It is default and custom constructor
    {
        s = new double[max_size];
        allocated = max_size;
        top = 0;
    }

    void push(double x)
    {
        if(top < allocated)
            s[top++] = x;
    }

    double pop()
    {
        if(top == 0) return -1;
        return s[--top];
    }

    ~Stack()
    {
        delete[] s;
    }
};
