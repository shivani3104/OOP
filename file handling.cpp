#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class file{
    public:
    string s,s1,s3;
    void write()
    {   ofstream file1;
        file1.open("abc.txt");
        cout<<"Enter the data in File"<<endl;
        getline(cin,s);
        file1<<s;
        file1.close();
        cout<<"Now your file is closed "<<endl;
    }
    void append(){
        ofstream file3;
        file3.open("abc.txt");
        cout<<"enter the you want to change:"<<endl;
        getline(cin,s);
        file3<<s;
        cout<<s<<endl;
        file3.close();
    }
    void read()
    {
        ifstream file2;
        file2.open("abc.txt");
        cout<<"Read the data"<<endl;
        file2>>s;
        cout<<s<<endl;
        file2.close();
    }
};
int main()
{ file file4;
    file4.write();
    file4.append();
    file4.read();
    return 0;
}#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class file{
    public:
    string s,s1,s3;
    void write()
    {   ofstream file1;
        file1.open("abc.txt");
        cout<<"Enter the data in File"<<endl;
        getline(cin,s);
        file1<<s;
        file1.close();
        cout<<"Now your file is closed "<<endl;
    }
    void append(){
        ofstream file3;
        file3.open("abc.txt");
        cout<<"enter the you want to change:"<<endl;
        getline(cin,s);
        file3<<s;
        cout<<s<<endl;
        file3.close();
    }
    void read()
    {
        ifstream file2;
        file2.open("abc.txt");
        cout<<"Read the data"<<endl;
        file2>>s;
        cout<<s<<endl;
        file2.close();
    }
};
int main()
{ file file4;
    file4.write();
    file4.append();
    file4.read();
    return 0;
}