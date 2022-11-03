/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

class human{
    
    public:
    int age;
    int weight;
    int height;
    
    public:
    int setweight(){
        return this->weight;
    }
    void setage(int a){
        this->age=a;
    }
};

class male:public human{
    public:
    string colour;
    void sleep()
    {
        cout<<"male sleeeping"<<endl;
    }
};
int main()
{
    male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    
    cout<<object1.colour<<endl;
    
    object1.sleep();
    object1.setage(20);
    cout<<object1.age<<endl;
    
    return 0;
}