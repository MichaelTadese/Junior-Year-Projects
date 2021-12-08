#include <iostream>
using namespace std;

int main()
{
    int digit, nr, sum=0, edigit;
    
    cout << "input a integer";
    cin >> nr;
    
    while(nr!=0)
    {
        digit = nr%10;
        edigit = digit%2;
        
        if(edigit == 0)
        sum = sum+digit;
        nr = nr/10;
    }
    cout << sum << endl<< endl;
    }
