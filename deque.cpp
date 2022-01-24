#include <iostream>


const int Size = 1000;
class Deque
{
    int* arr;       
    int capacity;   
    int front;      
    int last;       
    int count;     

public:
    Deque(int size = Size);
    ~Deque();

    int dequeue();
    int show();
    int size();
    void enqueue(int x);    
    bool isEmpty();
    bool isFull();
};


Deque::Deque(int size)
{
    arr = new int[size];
    capacity = size;
    front = 0;
    last = -1;
    count = 0;
}


Deque::~Deque() {
    delete[] arr;
}


int Deque::dequeue()
{
    
    if (isEmpty())
    {
        std::cout << "Error" << std::endl;
        exit;
    }

    int x = arr[front];
    std::cout << "Deleting " << x << std::endl;

    front = (front + 1) % capacity;
    count--;

    return x;
}


void Deque::enqueue(int number)
{
    if (isFull())
    {
        std::cout<< "Overflow";
        exit;
    }

    std::cout << "Inserting " << number << std::endl;

     last = (last + 1) % capacity;
    arr[last] = number;
    count++;
}
int Deque::show()
{
    if (isEmpty())
    {
        std::cout << "Error";
        exit;
    }
    return arr[front];
}
int Deque::size() {
    return count;
}

bool Deque::isEmpty() {
    return (size() == 0);
}


bool Deque::isFull() {
    return (size() == capacity);
}

int main()
{
    Deque myQueue(10);

    myDeque.enqueue(3);
    myDeque.enqueue(4);
    myDeque.enqueue(6);

    std::cout << "The first element is " << myDeque.show() << std::endl;
    myDeque.dequeue();
    myDeque.enqueue(4);
    std::cout << "The Deque size is " << myDeque.size() << std::endl;

    myDeque.dequeue();
    myDeque.dequeue();
    myDeque.dequeue();

    if (myDeque.isEmpty()) {
       std::cout << "After deleting the Deque is empty"<<std::endl;
    }
    else {
        std::cout << "The Deque is not empty" << std::endl;
    }

   
}


