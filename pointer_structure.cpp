// #include<bits/c++io.h>
// #include<iostream>

// using namespace std;

// struct Rectangle{
//     int l=90;
//     int b=10;
// };
// int main(){
//     Rectangle r ={40,60};
//     Rectangle *p =&r;

//     r.l =66;
//     p->b =56;

//     cout<<r.l<<endl;
//     cout<<r.b<<endl;
// }





#include<bits/c++io.h>
#include<iostream>

using namespace std;

struct Rectangle{
    int l;
    int b;
};
int main(){
    struct Rectangle *p;
    p=new Rectangle;

    p->l ;
    p->b ;

    cout<<p<<endl;
    cout<<p<<endl;
}