#include <iostream>
using namespace std;
 
#include <iomanip>
using std::setw;
 
int main () {

   int n[ 25 ];
 
   for ( int i = 0; i < 25; i++ ) {
      n[ i ] = i + 101;
   }
   cout << "Element" << setw( 13 ) << "Value" << endl;
 
   for ( int j = 0; j < 25; j++ ) {
      cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
   }
 
   return 0;
}
