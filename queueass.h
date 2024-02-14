#include <iostream>
#include <cstdlib>
using namespace std;

// Define the default capacity of the queue
#define SIZE 10
 
// A class to represent a queue
template <class T>
class queue
{
    T *arr;         // array to store queue elements
    int capacity;   // maximum capacity of the queue
    int front;      // front points to the front element in the queue (if any)
    int rear;       // rear points to the last element in the queue
    int count;      // current size of the queue
 
public:
    queue(int size = SIZE);     // constructor
 
    void pop();
    void push(T x);
    T firstelement();
    int size();
    bool isEmpty();
    bool isFull();

};
 
// Constructor to initialize a queue
template <class T>
queue<T>::queue(int size)
{
    arr = new T[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}
 
// function to dequeue the front element
template <class T>
void queue<T>::pop()
{
    // check for queue underflow
    if (isEmpty())
    {
        cout << "Underflow\nERROR\n";
        exit(1);
    }
 
    front = (front + 1) % capacity;
    count--;
}
 
// function to add an item to the queue
template <class T>
void queue<T>::push(T item)
{
    // check for queue overflow
    if (isFull())
    {
        cout << "Overflow\nERROR\n";
        exit(1);
    }
 
 
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}
 
// function to return the front element of the queue
template <class T>
T queue<T>::firstelement()
{
    if (isEmpty())
    {
        cout << "UnderFlow\nERROR\n";
        exit(1);
    }
    return arr[front];
}
 
// // function to return the size of the queue
template <class T>
int queue<T>::size() {
    return count;
}
 
// function to check if the queue is empty or not
template <class T>
bool queue<T>::isEmpty() {
    return (size() == 0);
}
 
// function to check if the queue is full or not
template <class T>
bool queue<T>::isFull() {
    return (size() == capacity);
}
