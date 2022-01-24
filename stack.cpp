

#include <iostream>

const int maxNumOfElements = 100;
class Stack
{
public:
    int myStack[maxNumOfElements];
    Stack() { top = 0;}
    int pop();
    bool push (int x);
    bool isEmpty();
private:
    int top;
};

bool Stack::push(int information)
{
    if (top >= (maxNumOfElements - 1)) {
        return false;
    }
    else {
        myStack[++top] = information;
        std::cout << information << std::endl;
        return true;
    }
}

int Stack::pop()
{
    if (top < 0) {
        std::cout << "Error!" << std::endl;
        return 0;
    }
    else {
        int information = myStack[top--];
        return information;
    }
}

bool Stack::isEmpty()
{
    return (top <= 0);
}
int main()
{
    Stack stack;  
    std::cout << "The pushed numbers" << std::endl;
    stack.push(1);
    stack.push(0);
    stack.push(0);
    std::cout << "The Stack contains : " << std::endl;
    while (!stack.isEmpty())
    {
        std::cout << stack.pop() << std::endl;
    }
    return 0;
}