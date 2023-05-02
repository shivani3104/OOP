/*Write a program in C++ to use map associative container. The keys will be the names of states 
and the values will be the populations of the states. When the program runs, the user is 
prompted to type the name of a state. The program then looks in the map, using the state 
name as an index and returns the population of the state.*/
#include<iostream>
#include<string>
#include<map>
using namespace std;

class country
{
   public:
   string state;
   int population;
   map<string,int> m;
   map<string,int>::iterator i;
   void input()
   {
      cout << "\n Enter the name of state:";
      cin >> state;
      cout<<"\n Enter the population(in Cr): ";
      cin>> population;
      m.insert(pair<string,int>(state,population));
        
   }
   void display()
   {
      cout << "State and Populations are: "; 
      for (i= m.begin(); i != m.end(); i++)    //i is for iterator
      cout <<"["<<(*i).first << ", "<<(*i).second<<"]";
   }
   void searching()
   {
      cout << "\n Enter the name of state for searching its population: ";
      cin>> state;
      if(m.count(state)!=0)                               // first represents key and second represents value
          cout << "Population is "<<m.find(state)->second<<"Cr";
      else
          cout << "State is not present in the list" << endl; 
   }
};
int main()
{
    
    country c;
    char ans = 'y';
    int choice;
    
    do
    {
      cout << "\n Main Menu";
      cout<<"\n1. Insert an element";
      cout << "\n2. Display";
      cout << "\n3. Search an state";
      cout<<"\n Enter your choice: ";
      cin >> choice; 
      switch (choice)
      {
      case 1:
             c.input();
             break;

     case 2:
            c.display();
            break;
     
     case 3: 
            c.searching();
            break;
     }
     cout << "\n Do you want to continue?(y/n): ";
     cin >> ans;
    } while (ans == 'y' || ans == 'Y');
     return 0;
}     