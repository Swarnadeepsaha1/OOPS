/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

// POLYMORPHISM operator OVERLOADING
class B{
    public:
    int a;
    int b;
    
    public: 
    int add()
    {
        return a+b;
    }
    void operator+(B &obj)
    {
        int value1=this->a;
        int value2=obj.a;
        cout<<"Output is :"<<value2-value1<<endl;
    }
};
int main()
{
    B obj1,obj2;
    obj1.a=4;
    obj2.a=7;
    
    obj1+obj2;
    
    
}
