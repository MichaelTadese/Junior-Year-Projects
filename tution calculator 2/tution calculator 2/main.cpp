#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numfr, option, id, tottut, tut=10000, mp=5000;
    cout << "Welcome to the tution calculator! Enter the total number of incoming freshman. "<<endl<<endl;
    cin>> numfr;
    
    for(int i = 0; i < numfr; i++)
    {
    cout << "Enter student id number:";
        cin >> id;
        
    cout << "Input your housing option 1 - $7500, 2 - $6800, 3 - $5700, 4 - $5000:";
        cin >> option;
    switch (option){
        case 1: tottut=7500+tut+mp;
            cout <<id<<" - Total amount: $"<< tottut<<endl<<endl;
                break;
        case 2: tottut=6800+tut+mp;
            cout <<id<<" - Total amount: $"<< tottut<<endl<<endl;
            break;
        case 3: tottut=5700+tut+mp;
            cout <<id<<" - Total amount: $"<< tottut<<endl<<endl;
            break;
        case 4: tottut=5000+tut+mp;
            cout <<id<<" - Total amount: $"<< tottut<<endl<<endl;
            break;
        default: cout << "Error in input" << endl;
            
            
    }
    }
    }
    
    
