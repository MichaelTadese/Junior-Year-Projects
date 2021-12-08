#include <iostream>
using namespace std;
int main()
{
    int n, i, t;
    bool isprime = true;
    
    cout << "Enter up to three numbers: ";
    cin >> n;
    cin >> i;
    cin >> t;
    
    for (i=3; i<=n/3; i++)
    {
        if(n% i == 0)
        {
            isprime = false;
        }
    }
    if (isprime)
        cout<< "TRUE"<<endl;
    else
        cout << "False"<<endl;
    

}
