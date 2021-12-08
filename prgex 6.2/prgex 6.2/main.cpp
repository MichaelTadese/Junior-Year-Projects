#include <iostream>
using namespace std;

int sumDigits(long n);

int main() {
    int n;
    cout << "Input your number: ";
    cin >> n;
    cout << "The sum of the digits is: "<< sumDigits(n)<<endl;
    
    return 0;
}

int sumDigits(long n)
{
    long i=n;
    int sum=0;
    while(i!=0)
    {
        
        sum = sum + i % 10;
        i = i / 10;
    }
    return sum;
}
