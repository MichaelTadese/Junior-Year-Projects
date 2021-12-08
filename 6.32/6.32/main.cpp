#include <iostream>
#include <cmath>
using namespace std;

void solveQuadraticEqatuion(double a, double b, double c, double d);

int main()
{
    int a = 0, b = 0 , c = 0, d = 0;
    solveQuadraticEqatuion(a, b, c, d);
    return 0;
}

void solveQuadraticEqatuion(double a, double b, double c, double d)
{
    cout << "Enter the values a, b & c respectively: " << endl;
    cin >> a >> b >> c;
    d = (b*b)-4*(a*c);

    if (d > 0)
    {
        cout << ((-b + sqrt(d)) / (2*a)) << endl;
        cout << ((-b - sqrt(d)) / (2*a)) << endl;
    }
    else if (d == 0)
        cout << ((-b + sqrt(d)) / (2*a)) << endl;
    else
            cout<<"The equation has no roots"<<endl;
}


