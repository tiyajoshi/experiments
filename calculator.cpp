#include <iostream>
using namespace std;

int add (int a, int b)
{
    return a + b;
}
int subtract (int a, int b)
{
    return a - b;
}
int multiply (int a, int b)
{
    return a * b;
}
int divide (int a, int b)
{
    if (b == 0) 
    {
        cout <<"Invalid divisor:"<<b;
        return INT_MIN;
    }
    return a / b;
}

int main()
{
    int operation, a, b;
    cout<< "Enter operation \n 1: add \n 2: subtract \n 3: multiply \n 4: divide \n" ;
    cin>>operation;
    cout<< "Enter operands:";
    cin>>a>>b;
    
    switch(operation)   
    {
        case 1: cout<<"The addition is "<<add(a, b);
        break;
        case 2: cout<<"The subtraction is "<<subtract(a, b);
        break;
        case 3: cout<<"The multiplication is "<<multiply(a, b); 
        break;
        case 4: cout<<"The Division is "<<divide(a, b); 
        break;
        default: cout<< "Wrong Choice "<<operation;
   }
}