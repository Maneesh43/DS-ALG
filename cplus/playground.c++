#include <iostream>
#include <vector>
#include <cstdlib>
#define MANEESH "Thouti"
using namespace std;


class LazyAss{
    public:
    const int a = 56;
    int printManeesh(){
        cout << "a";
    }


} lass0;




int main(){

int *n;

int a[2]={5,6};

n=a;

vector<int> v1={1,2,3,4};

cout << v1[0];

// cout << *(n+1);

int *vector = new int(5);

int *vec1=new int[5];
cout << *(vec1+1);
delete[] vec1;
vec1=new int(10);
cout << *(vec1);
return EXIT_SUCCESS;

}