// #include<bits/c++io.h>
// #include<iostream>

// using namespace std;
// void fun(int A[ ],int n)
// {
//     A[0]=15;
//     // for(int i=0;i<5;i++)
//     //     cout<<A[i]<<endl;
// }
// int main(){
//     int A[ ]={2,4,6,8,10};
//     int n=5;
//     fun(A,n);
     
//     for(int x:A)
//     cout<<x<<" ";
//     return 0;
// }

#include<bits/c++io.h>
#include<iostream>

using namespace std;

int * fun(int size)
{
    int *p;
    p=new int[size];

    for(int i=0;i<size;i++)
    p[i] =i+1;

    return p;
}
int main(){
    int *ptr,sz=7;
    ptr =fun(sz);

    for(int i=0;i<sz;i++)

    cout<<ptr[i]<<endl;
    return 0;
}