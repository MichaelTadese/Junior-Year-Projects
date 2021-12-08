#include <iostream>
using namespace std;

bool isPrime(int number){
bool prime; // true false
int fact;
prime = true;
    for (fact = 2; fact <= number-1; fact++)
        if (number % fact == 0)
            prime = false;
return prime;

}

    int main(){
    int num1, num2, num3;
    cout << " Input the first number ";
    cin >> num1;

        if (isPrime(num1))
            cout  << endl;
        else
            cout  << endl;
    cout << " Input the second number ";
    cin >> num2;

        if (isPrime(num2))
            cout << endl;
        else
            cout <<  endl;
    cout << " Input the third number ";
    cin >> num3;

        if (isPrime(num3))
            cout << endl;
        else
            cout  << endl;
        
        if (num1, num2, num3 == true)
            cout<< "True" << endl;
        else
            cout << "False" << endl;
        
    }
