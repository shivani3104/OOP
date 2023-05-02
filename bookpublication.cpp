#include<iostream>
#include<string.h>
using namespace std;

class publication
{
  private:
  string tittle;
  float price;
  public:
   void getdata()
   {
       string t;
       float p;
       cout<<"Enter the Tittle of publication:"<<endl;
       cin>>t;
       cout<<"Enter the price of Publication"<<endl;
       cin>>p;
       tittle=t;
       price=p;
    }
    void putdata()
    {
        cout<<"The tittle of publication is:"<<tittle<<endl;
        cout<<"The price of Publication is:"<<price<<endl;
    }
};
class book:public publication
{
    private:
    int pgcount;
    public:
    void getdata()
    {
        publication::getdata();
       cout<<"Enter the page count of publication:"<<endl;
       cin>>pgcount;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"The page count of publication is: "<<pgcount<<endl;
     }
};
class tape:public publication
{
    private:
    float pytime;
    public:
        void getdata()
    {
    publication::getdata();
    cout<<"Enter the play time in minute: "<<endl;
    cin>>pytime;
    }
    void putdata()
    {
        publication :: putdata();
        cout<<"The playtime in minute is: "<<pytime<<endl;
    }
    
};
int main()
{
    book b;
    tape t;
    b.getdata();
    t.getdata();
    b.putdata();
    t.putdata();
    return 0;
    
}