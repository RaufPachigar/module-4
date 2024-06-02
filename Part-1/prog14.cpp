//Write a program to find the max number from given two numbers using friend function
#include<iostream>
using namespace std;

class one
{
    int a;
    public:
    friend int cal(one a);

};
class two
{
    int b;
    public:
    friend int cal(one a,two b);

};

 cal(int f,int g)
{
    int ans=(x.a>y.b)?x.a:y.b;
}
int main()
{
    one x;
    two y;
    cal(10,20);
}
