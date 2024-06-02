//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include<iostream>
using namespace std;

class parent //parent class
{
    public:
    parent() //constructor
    {
        cout << "Parent class Constructor\n";
    }

    ~parent()//destructor
    {
        cout << "Parent class Destructor\n";
    }
};

class child : public parent//child class
{

    public:
    child() //constructor
    {
    cout << "Child class Constructor\n";
    }

    ~ child() //destructor
    {
    cout << "Child class Destructor\n";
    }
};

int main()
{
    
    child c;

    return 0;
} 

