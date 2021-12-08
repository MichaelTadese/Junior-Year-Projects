#include<iostream>
using namespace std;

double area(double);
double circum(double);

int main()
{
    int radius=1;
    while(radius!=0)
    {
    cout<<"Enter Radius of Circle: ";
    cin>>radius;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Area of a Circle with radius "<< radius << " is : "<<area(radius)<<endl;
    cout<<"Circumference of a Circle with radius "<< radius << " is : "<<circum(radius)<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"enter 0 to end"<<endl<<endl<<endl;
    }
}
double area(double radius)
{
        return (3.14159 * radius * radius);
}
double circum(double radius)
{
        return(2 * 3.14159 * radius);
}
