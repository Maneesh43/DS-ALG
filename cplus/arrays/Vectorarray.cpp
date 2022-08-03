
// Need to do
// Double the size of array if array is full
// implement common array operations
// size(), capacity(), is_empty(), at(index), push(), insert(index,item), prpend(), pop(), delete(index),...
#include <iostream>

using namespace std;
template <class T>

class CustomVector
{
private:
    int jsize = 0;
    int jcapacity = 0;

public:
    T *v;

    CustomVector()
    {
        v = new int(0);
    }
    int size()
    {
        return jsize;
    }
    int capacity()
    {
        return jcapacity;
    }
    int is_empty()
    {
        return size() == 0;
    }
    int at(int jindex)
    {
        try
        {
            if (jindex < size())
            {
                return *(v + jindex);
            }
            else
            {
                throw(1);
            }
        }
        catch (int code)
        {
            cout << "Blown up";
            return 1;
        }
    }
    void push(T jitem)
    {
        if (size() == capacity())
        {
            resize();
        }
    }
    void resize()
    {
        T *arr=new T[2*size()];
        for(auto i=0;i<size();i++){
            *(arr+1)=*(v+1);
        }
        delete [] v;
        v=arr;
    }
};

int main()
{
    CustomVector<int> vec;
    cout << vec.resize();
}