#include <iostream>
using namespace std;

void solveEquation(double a, double b, double c, double d, double e, double f);

int main()
{
    double a = 0.0, b = 0.0, c = 0.0, d = 0.0, e = 0.0, f = 0.0;
    solveEquation(a, b, c, d, e, f);
    return 0;
}

void solveEquation(double a, double b, double c, double d, double e, double f)
{
    cout << "Enter the values of a, b, c, d, e & f respectively: " << endl;
    cin >> a >> b >> c >> d >> e >> f;
    
    if ((a*d)-(b*c) == 0)
        cout << "The equation has no solution." << endl;
    else
        cout << "X=" << (((e*d)-(b*f))/((a*d)-(b*c))) << endl << "Y=" << (((a*f)-(e*c))/((a*d)-(b*c))) << endl;
}
