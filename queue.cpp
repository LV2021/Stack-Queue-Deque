// ConsoleApplication26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
const int size = 100;

class Queue {
public:
    Queue() {
        front = -1;
        back = -1;
    }
    bool IsFull();
    bool isEmpty();
    void enQueue(int value);
    void show();
    int deQueue();
private:
    int myqueue[size];
    int front;
    int back;


};

bool Queue::IsFull() {
    if (front == 0 && back == size - 1) {
        return true;
    }
    std::cout << "Queue is full!!" << std::endl;
    return false;
}
bool Queue::isEmpty() {
    if (front == -1) { return true; }
    else return false;
}
void Queue::enQueue(int value) {

    if (front == -1)
        front = 0;
        back++;
    myqueue[back] = value;
    std::cout << value <<std::endl;
}
int Queue::deQueue() {
    int value;
    if (isEmpty()) {
        std::cout << "Queue is empty!!" << std::endl; 
        return(0);
    }
    else {
        value = myqueue[front];
        if (front >= back) {      // one element in queue
            front = -1;
            back = -1;
        }
        else {
            front++;
        }
        std::cout << "Deleted => " << " "<< value << " from myqueue" << std::endl;
        return value;
    }
}
void Queue::show()
{
    int i;
    if (isEmpty()) {
        std::cout << "Queue is Empty!!" <<std::endl;
    }
    else {
       
        std::cout << "Queue elements : "<<std::endl;
        for (i = front; i <= back; i++)
            std::cout << myqueue[i] << std::endl;
        
    }
};

int main()
{
    Queue queue;
    std::cout<< "Inserte numbers:" << std::endl; 
    queue.enQueue(10);
    queue.enQueue(20);
    queue.enQueue(30);
    queue.enQueue(40);
    queue.enQueue(50);
    queue.enQueue(60);

    queue.printQueue();
    queue.deQueue();//removes 10
    queue.printQueue();//print after dequeue

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
