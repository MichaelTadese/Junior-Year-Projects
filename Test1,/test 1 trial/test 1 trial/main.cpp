#include <iostream>
using namespace std;

bool is_prime(int n){
    for ( int i=2;i<n/2;i++){
            if(n%i==0)

return false;
}
return true;
}

int main()
{
   bool a;
   int n;
    cout<< "Input three numbers"<<endl;
    cin >>n;
    a=is_prime( n);
    cout<<a;

}
