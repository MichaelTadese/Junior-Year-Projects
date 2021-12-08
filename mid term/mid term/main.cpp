#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

struct Item{
    char Item[50];
    char Color[10];
    char Size[5];
    float Price;
};

int main()
{
    struct Item itemsArray[1000];
    int count =0;
    int inp;
    
    cout << "1. Add item" << endl << "2. Quit" << endl << "Enter choice: "<< endl;
    cin >> inp;
    
    while(inp !=2){
        cout << "Enter item name: " << endl;
        cin >> itemsArray[count].Item;
        cout << "Enter item Color: " << endl;
        cin >> itemsArray[count].Color;
        cout << "Enter item Size: " << endl;
        cin >> itemsArray[count].Size;
        cout << "Enter item Price: " << endl;
        cin >> itemsArray[count].Price;
        cout << "Item added successfully!!!"<< endl;
        count++;
        
        cout << "1. Add item" << endl << "2. Quit" << endl << "Enter choice: " << endl;
        cin >> inp;
    
    }
    int i;
    cout << "The items entered are: "<< endl;
    cout << "*-*-*-*-*-*" << endl;
    for (i=0; i < count; i++){
        static_cast<void>(i+1), cout << itemsArray[i].Item <<" "<< itemsArray[i].Color <<" "<< itemsArray[i].Size <<" "<< itemsArray[i].Price << endl;
    
    }
    cout << "*-*-*-*-*-*" << endl<<endl;
    return 0;
}
