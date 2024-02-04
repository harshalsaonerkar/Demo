#include <iostream>
using namespace std;
class add
{
    public:
    int a,b,c;
    void display();
    

};
void add::display()
{
    
    cout<<"Enter the number a : ";
    cin>>a;
    cout<<"Enter the number b : ";
    cin>>b;
    c=a+b;
    cout<<"The addition of two numbers is: "<<c;

}
int main()
{
    add c1;
    c1.display();

}