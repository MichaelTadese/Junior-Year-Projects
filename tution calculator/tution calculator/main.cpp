#include <iostream>
using namespace std;

int main()
{
    int option, status, id=1, tottut, con=1;
    char stat;
    cout << "Welcome to the tution calculator!"<<endl<<endl;
    
    while(con!=0)
    {
    cout << "Enter your student id number:";
        cin >> id;
        
    cout << "If you are an outstate student enter o/O and i/I if you are an instate student?";
        cin>>stat;
            if(stat=='o' || stat=='O')
                status=8000;
            else if (stat=='i' || stat=='I')
                status=6000;
        
    cout << "Input your housing option 1 - $8300, 2 - $7500, 3 - $6200, 4 - $6000:";
        cin >> option;
    switch (option){
        case 1: tottut=8300+status;
            cout <<id<<" - Total amount due: $"<< tottut<<endl;
                break;
        case 2: tottut=7500+status;
            cout <<id<<" - Total amount due: $"<< tottut<<endl;
            break;
        case 3: tottut=6200+status;
            cout <<id<<" - Total amount due: $"<< tottut<<endl;
            break;
        case 4: tottut=6000+status;
            cout <<id<<" - Total amount due: $"<< tottut<<endl;
            break;
        default: cout << "Error in input" << endl;
    }
            
        cout << "To calculate again enter 1, to end enter 0:"<<endl;
            cin >> con;
    
    }
    }
    
    
