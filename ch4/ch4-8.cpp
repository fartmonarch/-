#include <iostream>

using namespace std;

class ArrayStack
{
private:
    int* _items;       // ����
    int _capacity;     // ջ������
    int _top;          // ջ������

public:
    ArrayStack(int capacity = 10) : _capacity(capacity), _top(-1)
    {
        _items = new int[_capacity];
    }

    ~ArrayStack()
    {
        delete[] _items;
    }

    bool isEmpty() const
    {
        return _top == -1;
    }

    void push(int item)
    {
        if (_top == _capacity - 1)
        {
            cout << "ջ����" << endl;
            return;
        }
        _items[++_top] = item;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "ջ����" << endl;
            return -1; // ����һ����־ֵ
        }
        return _items[_top--];
    }

    int peek() const
    {
        if (isEmpty())
        {
            cout << "ջ����" << endl;
            return -1; // ����һ����־ֵ
        }
        return _items[_top];
    }

    int size() const
    {
        return _top + 1;
    }
};

int main()
{
    ArrayStack stack;

    stack.push(1);
    stack.push(2);
    cout << stack.pop() << endl;  // ��� 2
    cout << stack.peek() << endl; // ��� 1
    cout << "�Ƿ����,�������true,�������false" << endl;
    cout << boolalpha << stack.isEmpty() << endl; 
    system("pause");

    return 0;
}
