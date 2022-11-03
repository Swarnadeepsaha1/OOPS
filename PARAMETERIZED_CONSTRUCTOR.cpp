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
     Hero(){
         cout<<"CONSTRUCTOR CALLED"<<endl;
         
     }
     
     //PARAMETERISED CONSTRUCTOR
     Hero(int health)
     {
         cout<<"this -> "<<this<<endl;
         this -> health= health;
     }
     // JUST A FUNCTION
     void print()
     {
         cout<<"HEALTH"<<this->health<<endl;
         cout<<"LEVEL"<<this->level<<endl;
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
   Hero suresh;
   suresh.setHealth(70);
   suresh.setLevel('C');
   
   suresh.print();
   Hero R(suresh);
   
   R.print();
    
     return 0;
    
}