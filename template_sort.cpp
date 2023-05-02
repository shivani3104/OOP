#include<iostream>
using namespace std;
int n;
#define size 10
template<class T>
void sel(T A[size])
{
    int i,j,min;
    T temp;
     for(i=0;i<n-1;i++)
     {
            min=i;
         for(j=i+1;j<n;j++)
             {
             if(A[j]<A[min])
             min=j;
             }
         temp=A[i];
         A[i]=A[min];
         A[min]=temp;
     }
         cout<<"\nSorted array: ";
         for(i=0;i<n;i++)
         {
         cout<<" "<<A[i];
         }
    }
int main()
{
 int ch;
 int A[size];
 float B[size];

 int i;

 cout<<"-----------------------";
 do
 {
 cout<<"\n 1. Integer : ";
 cout<<"\n 2. Float : ";
 cout<<"\n Enter Choice : ";
 cin>>ch;
 switch(ch)
 {
 case 1:
 {
 cout<<"\nEnter Total Number Of Integer Elements:";
 cin>>n;
 cout<<"\nEnter Integer Elements:";
 for(i=0;i<n;i++)
 {
 cin>>A[i];
 }
 sel(A);

 break;
 }
 case 2:
 {
 cout<<"\nEnter Total Number Of Float Elements:";
 cin>>n;
 cout<<"\nEnter Float Elememts:";
 for(i=0;i<n;i++)
 {
 cin>>B[i];
 }
 sel(B);
break;
 }
 default:
 {
 cout<<"\n Invalid";
 }
 }
 }
 while(ch!=3);
return 0;
}