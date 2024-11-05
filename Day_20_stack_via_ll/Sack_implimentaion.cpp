#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top = -1;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
    }

    ~Stack() // Destructor to free memory
    {
        delete[] arr;
    }

    void push(int data)
    {
        if (top < size - 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Stack is overflowing:::" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is underflowing:::" << endl;
        }
        else
        {
            top--;
        }
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty:::" << endl;
        }
        else
        {
            cout << arr[top] << endl;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.peek();
    st.pop();
    st.peek();

    return 0;
}
