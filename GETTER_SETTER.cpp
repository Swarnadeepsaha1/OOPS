/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class hero{
    // PROPERTIES
     private :
     int health;
     
     public:
     char level;
     
     // JUST A FUNCTION
     void print()
     {
         cout<<level<<endl;
     }
     
     //GETTER SETTER
     
     int getHealth()
     {
         return health;
     }
     
     char getLevel()
     {
         return level;
     }
     void setHealth(int h)
     {
         health=h;
     }
     void setLevel(char ch)
     {
         level=ch;
     }
     
     
};

int main()
{
    //Creation of object
    
    hero ramesh;
    cout<<"Ramesh health is"<<ramesh.getHealth()<<endl;
    
    // USING SETTER
    ramesh.setHealth(70);
    ramesh.level='C';
    cout<<"Health is "<<ramesh.getHealth()<<endl;
    cout<<"Level is "<<ramesh.level<<endl;
    //cout<<"SIZE :"<<sizeof(h1)<<endl;
    
    return 0;
}