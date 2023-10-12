#include<iostream>
using namespace std;

int factorial(int number)
{
    int fact=1;
    for(int i=1; i<=number; i++)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    cout<<"Enter number: ";
    int num;
    cin>>num;
    cout<<"The factorial is :"<<factorial(num);
}

