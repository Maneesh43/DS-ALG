#ifndef QueueArray_H
#define QueueArray_H

namespace qarr
{
    template <class T>
    class QueueArray
    {
        public:
            QueueArray(int size);
            void enqueue(T value);
            T dequeue();
            int getSize() const;
        private:
            int head{0},tail{0};
    };
}

#endif