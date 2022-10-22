#include<iostream>
#include<cstdlib>
#include "QueueArray.h"
using namespace std;
namespace qarr{
    // simply maintain two pointers to track where to insert and where to pop element
    template <class T>
    void QueueArray<T>::enqueue(T value){
       if(size_<5){
        arr[tail] = value;
        tail++;
        size_++;
       }
    }
    template <class T>
    T QueueArray<T>::dequeue(){
        if(size_ > 0){
            T value = arr[head];
            arr[head] = 0;
            head++;
            size_--;
            return value;
        }
        return -1;
    }
    template <class T>
    int QueueArray<T>::getSize()const{
        return size_;
    }
}


int main(){
    qarr::QueueArray<int> q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.dequeue();
    q1.dequeue();
    q1.enqueue(3);
    cout << q1.dequeue();
    return EXIT_SUCCESS;
}
