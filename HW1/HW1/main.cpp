#include <iostream>
#include <string>
using namespace std;

int main()
{
    float maximum, item, discount, discountpercent, many=0, count=0, price, total, Gtotal=0, available;
    
    cout << "What is your maximum to spend?" << endl;
    cin >> maximum;
    available=maximum;
    
    while (Gtotal < maximum)
   {
       cout << "You have $ " << available << " dollars to spend. Select your items by choosing the number of the item from the list below or to check out." << endl;
       cout << "1) Roses = $75.00 per 1/2 dozen (25% discount)" << endl << "2) Hair extentions = $100 per pack (10% discount)" << endl << "3) Male Jeans = $150.00" << endl << "4) Female Jeans = $175.00 (5% discount)" << endl << "5) Jordans = $200.00" << endl;
       cout << "Enter the number corresponding to the item you desire" << endl;
       cin >> item;
       
       if  (item == 0){
           Gtotal=maximum+1;}
       else
           if (item == 1){
               item=75;
               cout << "How many of this item would you like?" << endl;
               cin >> many;
               item=many*item;}
           else
               if (item == 2){
                   item=100;
                   cout << "How many of this item would you like?" << endl;
                   cin >> many;
                   item=many*item;}
               else
                   if (item == 3){
                       item=150;
                       cout << "How many of this item would you like?" << endl;
                       cin >> many;
                       item=many*item;}
                   else
                       if (item == 4){
                           item=175;
                           cout << "How many of this item would you like?" << endl;
                           cin >> many;
                           item=many*item;}
                       else
                           if (item == 5){
                               item=200;
                               cout << "How many of this item would you like?" << endl;
                               cin >> many;
                               item=many*item;}
       
       cout << "Does this item have a discount? Enter 1 for YES and 2 for NO." << endl;
       cin >> discount;
       if (discount==1){
            cout << "What is the % of the discount?" << endl;
            cin >> discountpercent;
           price=item;
           price= item - price;
       }
       else
           price=item;
       
       count= count + many;
       total= price + price * 0.07;
       
       if (total>available){
           cout << "You only have" << available << "You cannot make this purchase." << endl;
           total=0;
           count= count-many;
       }
       
       Gtotal=Gtotal +total;
       cout << "You have " << count << " items in your cart. Your cost is $ " << Gtotal << "."<< endl;
       cout << "--------------------------------------------------------------" << endl << endl;
       available= maximum-Gtotal;
       
   }
}
