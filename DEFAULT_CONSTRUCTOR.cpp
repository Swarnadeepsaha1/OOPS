/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class Hero{
    // PROPERTIES
     private :
     int health;
     
     public:
     char level;
     
     //Default constructor
     Hero()
     {
         cout<<"CONSTRUCTOR CALLED"<<endl;
     }
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
    // OBJECT CREATED STATICALLY
    cout<<"Hi"<<endl;
    Hero ramesh;
    cout<<"Hello"<<endl;
    
    
     return 0;
    
}