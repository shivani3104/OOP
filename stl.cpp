/*Write C++ program using STL for sorting and searching user defined records such as personal 
records (Name, DOB, Telephone number etc) using vector container.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class personal
{     
public:
     string name;
     char birthdt;
     long telphno;
     void create()
     {
        cout<<"enter a name of person:"<<endl;
        cin>>name;
        cout<<"enter a date of birth of person:"<<endl;
        cin>>birthdt;
        cout<<"enter a telephone no of person:"<<endl;
        cin>>telphno;
        cout<<endl;
     }
     void display()
     {
        cout<<"name of person:"<<name<<endl;
        cout<<"date of birth of person:"<<birthdt<<endl;
        cout<<"telephone no of person:"<<telphno<<endl;
        cout<<endl;
     }
};

int main()
{
    int n;
    cout<<"enter a no of person:"<<endl;
    cin>>n;
    vector<personal>pr(n);
    vector<string>name(n);
    vector<int>telphno(n);

    string target;
    int choice;
    char ans='y';
    do
    {
      cout << "\n Main Menu";
      cout<<"\n1. Insert data of person";
      cout << "\n2. Display data of person";
      cout << "\n3. sort the data";
      cout<<"\n4. search the data";
      cout<<"\n5. delete a perticular data";
      cout<<"\n Enter your choice: ";
      cin >> choice; 
      switch (choice)
      {
        case 1:
               for (int i = 0; i < n; i++)
               {
                    pr[i].create();
               }
               break;

        case 2:
               for (int i=0; i<n;i++)
               {
                    pr[i].display();
               }
               break;
     
        case 3: 
               for (int i = 0; i < n; i++)
               {
                    name[i] = (pr[i].name);
               }

               sort(name.begin(), name.end());

               for (int i = 0; i < n; i++)
               {
                    for (int j = 0; j < n; j++)
                    {
                        if (name[i] == pr[j].name)
                        {
                            pr[j].display();
                        }
                    }
               }
                break;
        case 4:
               for (int i = 0; i < n; i++)
               {
                    name.push_back(pr[i].name);
               }
               cout << "Enter the name to be searched in the database:\n";
               cin >> target;
               if (binary_search(name.begin(), name.end(), target))
               {
                    cout << "the person data present in database\n";
               }
               else
               {
                    cout << "the person data is not present in database\n";
               }
                break;
        case 5:
               for (int i = 0; i < n; i++)
                {
                    name.push_back(pr[i].name);
                }
                cout << "Enter the name to be deleted in the database:\n";
                cin >> target;
                if (binary_search(name.begin(), name.end(), target))
                {
                    cout << "the person data is present in database\n";
                    cout << "the data of person is delete the database.\n";
                    for (int i = 0; i < n; i++)
                    {
                        if (pr[i].name == target)
                        {
                            pr.erase(pr.begin() + i);
                        }
                    }
                }
                else
                {
                    cout << "THE PERSON'S DATA IS NOT PRESENT IN THE RECORD\n";
                }
                break;  
        default: cout<<"Sorry...! Invalid choice"<<endl;
                 break;           
     }
     cout << "\n Do you want to continue?(y/n): ";
     cin >> ans;
    } while (ans == 'y' || ans== 'Y');
    return 0;
}*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class itemrec
{
public:
char name[10];
int quantity;
int cost;
int code;
bool operator==(const itemrec &obj1)
{
if (code == obj1.code)
{
return 1;
}
return 0;
}
bool operator<(const itemrec &obj1)
{
if (code < obj1.code)
{
return 1;
}
return 0;
}
};
vector<itemrec> v1;
void insert();
void display();
void search();
void dlt ();
void print(itemrec & obj1);
bool compare(const itemrec &obj1, const itemrec &obj2)
{
return obj1.cost < obj2.cost;
}
int main()
{
int choice, l = 0;
while (l == 0)
{
cout << "**********************" << endl;
cout <<"PRESS1:INSERT\nPRESS2:DELETE\nPRESS3:DISPLAY\nPRESS4:SEARCH\nPRESS5:SORT\nPRESS6:EXIT" << endl;
cout << "ENTER YOUR CHOICE" << endl;
cin >> choice;
switch(choice)
{
case 1:
insert();
break;
case 2:
dlt();
break;
case 3:
display();
break;
case 4:
search();
break;
case 5:
sort(v1.begin(),v1.end());
cout<<"\n\nSORTED RECORD AS PER COST : ";
display();
break;
case 6:
l+=1;
break;
}
}
}
void insert()
{
itemrec obj1;
cout << "\nENTER THE ITEM NAME : ";
cin >> obj1.name;
cout << "\nENTER THE ITEM QUANTITY : ";
cin >> obj1.quantity;
cout << "\nENTER THE ITEM COST : ";
cin >> obj1.cost;
cout << "\nENTER THE ITEM CODE: ";
cin >> obj1.code;
v1.push_back(obj1);
}
void dlt()
{
vector<itemrec>::iterator p;
itemrec obj1;
cout<<"\nENTER THE ITEM CODE TO DELETE : ";
cin>>obj1.code;
p=find(v1.begin(), v1.end(), obj1);
if (p==v1.end())
{
cout << "THE RECORD WAS NOT FOUND";
}
else
{
cout<<"RECORD FOUND SUCCESFULLY" << endl;
v1.erase(p);
cout<<"RECORD DELETED SUCCESFULLY"<<endl;
}
}
void display(){
vector<itemrec>::iterator p;
for(int i=0;i<=v1.size()-1;i++)
print(v1[i]);
}
void search()
{
vector<itemrec>::iterator p;
itemrec obj1;
cout << "\n ENTER THE CODE OF ITEM YOU WANT TO SEARCH : ";
cin >> obj1.code;
p=find(v1.begin(), v1.end(),obj1);
if(p==v1.end())
{
cout << "RECORD NOT FOUND" << endl;
}
else
{
cout << "RECORD FOUND SUCCESFULLY" << endl;
}
cout<<endl;
}
void print(itemrec &obj1){
cout<<"\n***********"<<endl;
cout<<"\nITEM NAME : "<<obj1.name;
cout<<"\nITEM QUANTITY : "<<obj1.quantity;
cout<<"\nITEM COST : "<<obj1.cost;
cout<<"\nITEM CODE : "<<obj1.code;
cout<<"\n\n";
}