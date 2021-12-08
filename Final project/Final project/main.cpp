#include <iostream>
#include <fstream>
using namespace std;

 
int main()
{
    int purchasecount = 0, i, t=7;
    string size;
    double prices[20], discounts[20];
    double price, discount, discount2,balance = 0.0, totalpurchase = 0.0, itemprice;
    string name, color;
    ofstream fout;
    ifstream fin;
    char ch;
    int c=0;
  
    cout << "       ******************" <<endl;
    cout << "       * MICHAEL TADESE *" <<endl;
    cout << "       ******************" <<endl<<endl;
    
    do{
    
        cout << "*****ENTER 1 for Clerk Setting, 2 to begin shopping and 0 to Exit*****" << endl;
        cin >> ch;
  
        if(ch == '1')
        {
            cout << "Enter password:"<< endl;
            int pass;
            cin >> pass;
            if(pass== 1234)
            {
                cout << "Add inventory items" << endl;
                fout.open("inventory.txt");
                do{
                    cout << "    Item name : ";
                    cin >> name;
                    cout << "    Item size : ";
                    cin >> size;
                    cout << "    Item price : ";
                    cin >> price;
                    cout << "    Item discount: ";
                    cin >> discount;
                    fout << endl << name << " "  << size << " "
                    << price << " " << discount<< endl;
                    c++;
                    cout << "Would you like to add another item? (y/n): ";
                    cin >> ch;
                }while(ch == 'y');
                fout.close();
            }
        }
 

        else if(ch == '2')
        {
            fin.open("inventory.txt");
            cout << "Enter your balance: ";
            cin >> balance;
            totalpurchase = 0;
            purchasecount = 0;
  
            cout << "Choose items from below list add to cart:" << endl;
            cout << "Number Name Size Price Discount" << endl;
 

            i = 1;
            while(c > 0)
            {
            fin >> name >> size >> price >> discount;
            cout <<i<<"   "<<name<<"    "<<color<<"      "<<size <<"     "<<price<<"    "<<discount<<endl;
            prices[i] = price;
            discounts[i] = discount;
            i++;
            c--;
            }
  
            do
            {
            cout << "Enter item number: ";
            cin >> i;
            cout <<"7% tax is applied"<<endl;
            
            discount2 = prices[i]*discounts[i]/100;
            itemprice = prices[i] - (discount2);

 

            itemprice += itemprice * t/100;
  
            if(itemprice > balance){
            cout << "Sorry, you dont have sufficient balance to purchase this item.\n";
            }
            else{
            totalpurchase += itemprice;
            balance -= itemprice;
            purchasecount++;
            }
  
            cout << purchasecount << " items are in your cart." << endl;
            cout << "Your credit card balance is $" << balance << endl;
            cout << "Would you like to add more items to the cart? (y/n): ";
            cin >> ch;
            }while(ch == 'y');
            
            
        fin.close();
        }
    }while(ch != '0');
    cout << "*************************************"<<endl;
    cout << "*             *RECEIPT*             *"<<endl;
    cout << "*************************************"<<endl;
    cout << "*                                   *"<<endl;
    cout << "* Total Items: " << purchasecount<< "                    *"<<endl;
    cout << "* Total Cost: $" << totalpurchase     <<endl;
    cout << "* Remaining Credit Balance: $" << balance<<endl;
    cout << "*                || ||              *"<<endl;
    cout << "*                  |                *"<<endl;
    cout << "*                  V                *"<<endl;
    cout << "* Thank you for shopping with us!!! *"<<endl;
    cout << "*                                   *"<<endl;
    cout << "*************************************"<<endl;
 
  
return 0;
}
