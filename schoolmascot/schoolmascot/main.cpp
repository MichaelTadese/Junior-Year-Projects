#include <iostream>
using namespace std;

int main()
{
    int con=1, totT=0, totB=0, totC=0, totP=0, totG=0;
    char code;
    string name;
    
    while(con!=0)
    {
    cout << "Enter first name:";
        cin >> name;
        
    cout << "Enter school mascot code:";
        cin>>code;
            
    switch (code)
    {
        case 't' | 'T': totT=totT+1;
            cout << "Hello, "<< name <<" You are a Tiger."<<endl<<endl;
                break;
        case 'b' | 'B': totB=totB+1;
            cout << "Hello, "<< name <<" You are a Bulldog."<<endl<<endl;
            break;
        case 'c' | 'C': totC=totC+1;
            cout << "Hello, "<< name <<" You are a Cougar."<<endl<<endl;
            break;
        case 'p' | 'P': totP=totP+1;
            cout << "Hello, "<< name <<" You are a Panther."<<endl<<endl;
            break;
        case 'g' | 'G': totG=totG+1;
            cout << "Hello, "<< name <<" You are a Gamecock."<<endl<<endl;
            break;
        default: cout << "Error in input" << endl;
    }
    cout << "For another student enter 1, to end enter 0:"<<endl;
        cin >> con;
        
}
    cout <<"The total number of students from the school having the mascot code T or t is: "<< totT << endl;
    cout <<"The total number of students from the school having the mascot code B or b is: "<< totB << endl;
    cout <<"The total number of students from the school having the mascot code C or c is: "<< totC << endl;
    cout <<"The total number of students from the school having the mascot code P or p is: "<< totP << endl;
    cout <<"The total number of students from the school having the mascot code G or g is: "<< totG << endl;
}
    
    


