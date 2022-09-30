#include<iostream>
using namespace std;

class Hero{
   
   // properties
   private:
   int health;
  public:
  char level;

  Hero() {
    cout<< "Simple Constructor Called"<<endl;
  }

  // Parametrised Constructor
  Hero(int health,char level) {
    this -> level = level;
    this -> health = health;
  }

  void print(){
    cout<<"health "<< this->health<<endl;
    cout<<"level "<<this->level<<endl;
  }

  int getHealth(){
      return health;
  }

  char getLevel(){
      return level;
  }

  void setHealth(int h){
      health = h;
  }

  void setLevel(char ch){
      level = ch;
  }
   
   
};

int main()
{

    Hero S(70,'C');
    S.print();


    //Copy Constructor
    Hero R(S);
    R.print();



    /*
    //object created statically
 
    Hero ram(10);
    cout<< "Address of ram" << &ram <<endl;
    */


    /*
     // static allocation
      Hero a;
      a.setHealth(80);
      a.setLevel('C');
      cout<< "level is "<< a.level <<endl;
      cout<< "health is "<< a.getHealth() << endl;

      // dynamically
      Hero *b = new Hero;
      b->setHealth(92);
      b->setLevel('D');
      

      cout<< "level is "<<(*b).level <<endl;
      cout<< "health is "<<(*b).getHealth()<<endl; 

       cout<< "level is "<<b->level <<endl;
      cout<< "health is "<<b->getHealth()<<endl; 


      */

      // creation of Object
     // Hero ram;
     // cout<< "Ram health is "<<ram.getHealth()<<"\n";


    // use setter
    //     ram.setHealth(45);
    //     ram.setLevel('D');

     // ram.health = 70;
      // ram.level = 'B';

      // cout<<"health is: "<< ram.getHealth()<<"\n";
      // cout<<"Level is: "<<ram.level<<"\n";
      


    //  cout<<"size: "<<sizeof(h1) << endl;

}