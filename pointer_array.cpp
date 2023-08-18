// array pointer in stack
#include<bits/c++io.h>
#include<iostream>

using namespace std;

int main()
{

    int a[5]={89,9,88,65,32};
    int *p;
    p=a;

    for(int i=0;i<5;i++)
    // cout<<a[i]<<endl;
    cout<<p[i]<<endl;;
    
    return 0;
}


// Array pointer in heap memory
#include<bits/c++io.h>
#include<iostream>

using namespace std;

int main()
{

    int *p;
    p=new int[5];
    p[0]=10;
    p[1]=89;
    p[2]=34;
    p[3]=54;
    p[4]=123;


    for(int i=0;i<5;i++)
    // cout<<a[i]<<endl;
    cout<<p[i]<<endl;

    delete[ ]p;   

    return 0;
}