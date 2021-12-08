#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main ()
{
    cout << "       ******************" <<endl;
    cout << "       * MICHAEL TADESE *" <<endl;
    cout << "       ******************" <<endl<<endl;
    cout << "*****ENTER 1 to display menu and 2 for Clerk setting*****" << endl;
    int inp;
    cin >> inp;
    while (inp == 2){
        
   char data[1000];
   int count=0;

   ofstream outfile;
   outfile.open("afile.dat", ios::app);
   
        cout << "**Adding item!**" << endl;
        cout << "Enter item name: " << endl;
            cin.getline(data, 1000);
            cin >> data;
            outfile << data << endl;
        cout << "Enter item Color: " << endl;
            cin >> data;
            cin.ignore();
            outfile << data << endl;
        cout << "Enter item Size: " << endl;
            cin >> data;
            cin.ignore();
            outfile << data << endl;
        cout << "Enter item Price: " << endl;
            cin >> data;
            cin.ignore();
            outfile << data << endl;
        cout << "+++++Item added successfully!!!+++++"<< endl;
        count++;
        cout << "^*^*^*^Enter 1 to finish and enter 2 to Add more items^*^*^*^" << endl;
        cin>> inp;
        
   outfile.close();
    }
    
    char data[1000];
   ifstream infile;
   infile.open("afile.dat");
   int x=3;
    while(x>0){
   cout << "ITEM menu for customer" << endl;
   cout << "-----------------------"<<endl;
   cout << "ITEM name:" << endl;
   infile >> data;
   cout << data << endl;
   
   cout << "ITEM color:" << endl;
   infile >> data;
   cout << data << endl;
    
   cout << "ITEM size:" << endl;
   infile >> data;
   cout << data << endl;
        
   cout << "ITEM price:" << endl;
   infile >> data;
   cout << data << endl;
        cout << "-----------------------"<<endl;
        x--;
        cout << x;
}
   infile.close();
    
   return 0;

}
