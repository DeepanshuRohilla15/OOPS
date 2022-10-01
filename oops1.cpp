#include<bits/stdc++.h>
using namespace std;

class Hero{
   
   // properties
   private:
   int health;

   public:
   char *name;
   char level;

  Hero() {
    cout<< "Simple Constructor Called"<<endl;
    name = new char[100];
  }

  // Parametrised Constructor
  Hero(int health,char level) {
    this -> level = level;
    this -> health = health;
  }

  //Copy Constructor
  Hero(Hero& temp){

    char *ch = new char[strlen(temp.name) + 1];
    strcpy(ch, temp.name);
    this->name = ch;

    cout<< "Copy constructor called"<< endl;
    this->health=health;
    this->level=level;
  }

  void print(){
    cout<<endl;
    cout<< "[ Name: "<< this->name<<" ,";
    cout<<"health "<< this->health<<" ,";
    cout<<"level "<<this->level<<" ]";
    cout<<endl;
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
   
   void setName(char name[]) {
    strcpy(this->name, name);
   }
   
};

int main()
{

  Hero hero1;
  hero1.setHealth(12);
  hero1.setLevel('D');
  char name[7] = "Ojju";
  hero1.setName(name);

  //hero1.print();

  //use default copy constructor
  Hero hero2(hero1);
  //hero2.print();  or// Hero hero2 = hero1;

  hero1.name[0] = 'G';
  hero1.print();

  hero2.print();

  hero1 = hero2;
  hero1.print();
  hero2.print();


  /*
    Hero S(70,'C');
    S.print();


    //Copy Constructor
    Hero R(S);
    R.print();

   */

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