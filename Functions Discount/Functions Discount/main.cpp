#include <iostream>
#include <stdlib.h>
using namespace std;

int menu();
float discountf(float);


int main()
{
    float maximum=0;
    float total=0;
    float total_and_discount=0;
    float discount;
    float total_plus_tax=0;
    float grand_total=0;
    float available=0;
    
    int choicea=0;
    int many=0;
    int count=0;
    
    cout << "**How much money do you have in your shopping card?**" << endl;
    cin >> maximum;
    available=maximum;
    
    while(grand_total < maximum)
    {
        cout << "You have $ " << available << " dollars to spend." << endl;
        
        choicea = menu();
        
        if (choicea==0)
        {
            grand_total= maximum + 1;
        }
        
        else
        {
            if (choicea ==1)
            {
                cout << "How many half dozens of roses would you like?" << endl;
                cin>> many;
                total=many*75;
            }
            if (choicea ==2)
            {
                cout << "How many packs of hair extensions would you like?" << endl;
                cin>> many;
                total=many*100;
            }
            if (choicea ==3)
            {
                cout << "How many male jeans would you like?" << endl;
                cin>> many;
                total=many*150;
            }
            if (choicea ==4)
            {
                cout << "How many female jeans would you like?" << endl;
                cin>> many;
                total=many*175;
            }
            if (choicea ==5)
            {
                cout << "How many jordans would you like?" << endl;
                cin>> many;
                total=many*200;
            }
            
        cout << "Does this item have a discount? Enter 1 for YES and 2 for NO." << endl;
        cin>> discount;
            
            if (discount==1)
            {
                total_and_discount= discountf(total);
                total_plus_tax= total_and_discount+(total_and_discount*0.07);
            }
            else
            {
                total_plus_tax= total + (total * 0.07);
            }
            count= count+many;
            
            if (total_plus_tax>available)
            {
                cout<< "You only have $" << available << " you cannot make this purchase " << endl;
                cout << "--------------------------------------------------------------" << endl << endl;
                total_plus_tax=0;
                count = count - many;
            }
            
            grand_total= grand_total+ total_plus_tax;
            cout << "You have " << count << " items in your shopping cart, you total cost is $" << grand_total << endl;
            available=maximum - grand_total;
        }
    }
    cout <<"You have successfully checked out with " << count << " items." << endl;
    cout <<"You have $" << available << " left on your shopping card" << endl;
    cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl << endl;
    return 0;
}

int menu()
{
    int choice;
    cout << endl << "************************" << endl << "Choose the corresponding number of the item you would like to buy from the list below." << endl <<"1) Roses = $75.00 per 1/2 dozen (25% discount)" << endl << "2) Hair extentions = $100 per pack (10% discount)" << endl << "3) Male Jeans = $150.00" << endl << "4) Female Jeans = $175.00 (5% discount)" << endl << "5) Jordans = $200.00" << endl << "0) To proceed to checkout" << endl<< "************************" << endl;
    
    cin >> choice;
    return choice;
}

float discountf(float total)
{
    float percent;
    float total_discount;
    
    cout<< "What is the discount percent" << endl;
    cin>> percent;
    total_discount = total - (total* percent/ 100);
    return total_discount;
}
