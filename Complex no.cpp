// 1. OOPL Assignment 1
 /*Implement a class Complex which represents the Complex Number data type. Implement the following.
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overload operator+ to add two complex numbers.
3. Overload operator* to multiply two complex numbers.
4. Overload operators << and >> to print and read Complex Numbers.*/

#include<iostream>
using namespace std;

class complex
{   public:
    int real,imaginary;
    complex(int tempreal=0,int tempimaginary=0)
    {
        real=tempreal;
        imaginary=tempimaginary;
    }
    complex addcomp(complex c1,complex c2)
    {
        complex temp;
        temp.real=c1.real+c2.real;
        temp.imaginary=c1.imaginary+c2.imaginary;
        return temp;
    }
    complex mulcomp(complex c1,complex c2)
    {
        complex a;
        a.real=(c1.real*c2.real)-(c1.imaginary*c2.imaginary);
        a.imaginary=(c1.real*c2.imaginary)+(c2.real*c1.imaginary);
        return a;
    }
};
int main()
{
    complex c1(6,7);
    cout<<"complex no 1"<<c1.real<<"+i"<<c1.imaginary<<endl;
    complex c2(5,6);
    cout<<"complex no 2"<<c2.real<<"+i"<<c2.imaginary<<endl;
    complex c3;
    c3=c3.addcomp(c1,c2);
    cout<<"sum is"<<c3.real<<"+i"<<c3.imaginary<<endl;
    complex c4;
    c4=c4.mulcomp(c1,c2);
    cout<<"multi is"<<c4.real<<"s+i"<<c4.imaginary<<endl;
}