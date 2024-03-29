#include <iostream>
using namespace std;

int max(int num1, int num2);
double max(double num1, double num2);
double max(double num1, double num2, double num3);
double max(double num1, double num2, double num3, double num4);

int main()
{
    cout << "The maximum between 3 and 4 is " << max(3, 4) << endl;
    
    cout << "The maximum between 3.0 and 5.4 is " << max(3.0, 5.4) << endl;
    
    cout << "The maximum between 3.0 and 5.4, and 10.14 is " << max(3.0, 5.4, 10.14) << endl;
    
    cout << "The maximum between 3.0 and 5.4, 10.14, and 13.2 is " << max(3.0, 5.4, 10.14, 13.2) << endl;
    
    return 0;
}

int max(int num1, int num2)
{
    if (num1>num2)
        return num1;
    else
        return num2;
}

double max(double num1, double num2)
{
    if (num1>num2)
        return num1;
    else
        return num2;
}

double max(double num1, double num2, double num3)
{
    return max(max(num1, num2), num3);
}

double max(double num1, double num2, double num3, double num4)
{
    return max(max(max(num1, num2), num3), num4);
}


int max(int, int);
double max(double, double);
double max(double, double, double);
double max(double, double, double, double);


