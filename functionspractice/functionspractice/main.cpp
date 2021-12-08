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
    int lim1, lim2, nr;
    cout << " Input the interval ";
    cin >> lim1 >> lim2;
     for (nr = lim1; nr <= lim2; nr++){
        if (isPrime(nr))
            cout << nr << endl;
      }// end " for"
    
    system ("pause");
} // end main
 
