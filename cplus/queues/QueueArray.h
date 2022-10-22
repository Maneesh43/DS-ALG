#ifndef QueueArray_H
#define QueueArray_H

namespace qarr
{
    template <class T>
    class QueueArray
    {
        public:
        QueueArray(){
            head=0;
            tail=0;
            size_=0;
        }
            void enqueue(T value);
            T dequeue();
            int getSize() const;
        private:
            int head,tail,size_;
            T arr[5];
    };
}

#endif