#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    float ans = 1;
    char operation = '\0';
    
    cout << "\t\t WHILE LOOP \n\n";
    cout << "Input your first operand: ";
    cin >> num1;
    cout << "Input your second operand: ";
    cin >> num2;
    cout << "Pick from the following operations:" <<endl <<endl;
    cout << "\t\t\t\t\t\t******************************************" << endl;
    cout << "\t\t\t\t\t\t*" << "        Operations                      *" <<endl;
    cout << "\t\t\t\t\t\t*" << "    + ----------- Addition              *" <<endl;
    cout << "\t\t\t\t\t\t*" << "    - ----------- Substraction          *" <<endl;
    cout << "\t\t\t\t\t\t*" << "    * ----------- Multiplication        *" <<endl;
    cout << "\t\t\t\t\t\t*" << "    / ----------- Division              *" <<endl;
    cout << "\t\t\t\t\t\t*" << "    \\ ----------- Integer Division      *" <<endl;
    cout << "\t\t\t\t\t\t*" << "    ^ ----------- Power                 *" <<endl;
    cout << "\t\t\t\t\t\t*" << "    x ----------- To end the calculator *" <<endl;
    cout << "\t\t\t\t\t\t******************************************" <<endl;
    cout << "Your choice:";
    cin>> operation;
    while (toupper(operation) != 'X')
   {
       switch (operation)
        {
            case '+': ans=num1+num2;
                break;
            case '-': ans=num1-num2;
                break;
            case '*': ans=num1*num2;
                break;
            case '/': ans=num1/num2;
                break;
            case '\\': ans=int (num1)/ int (num2);
                break;
            case '^':
            {
                ans = 1;
                for (int i=0; i<num2; i++)
                {
                    ans=ans*num1;
                }//end of for
            }
                break;
            default: cout << " Error" << endl;
        }//end of switch
        cout <<num1<<operation<<num2<<"="<< ans << endl;
        cout << "---------------------------------------------------------------------------" <<endl<<endl;
        cout << "Input your first operand: ";
        cin >> num1;
        cout << "Input your second operand: ";
        cin >> num2;
        cout << "Pick from the following operations:" <<endl <<endl;
       cout << "\t\t\t\t\t\t******************************************" << endl;
       cout << "\t\t\t\t\t\t*" << "        Operations                      *" <<endl;
       cout << "\t\t\t\t\t\t*" << "    + ----------- Addition              *" <<endl;
       cout << "\t\t\t\t\t\t*" << "    - ----------- Substraction          *" <<endl;
       cout << "\t\t\t\t\t\t*" << "    * ----------- Multiplication        *" <<endl;
       cout << "\t\t\t\t\t\t*" << "    / ----------- Division              *" <<endl;
       cout << "\t\t\t\t\t\t*" << "    \\ ----------- Integer Division      *" <<endl;
       cout << "\t\t\t\t\t\t*" << "    ^ ----------- Power                 *" <<endl;
       cout << "\t\t\t\t\t\t*" << "    x ----------- To end the calculator *" <<endl;
       cout << "\t\t\t\t\t\t******************************************" <<endl;
        cout << "Your choice:";
        cin>> operation;
    }//end of while
   cout << "Program has ended!" << endl;
    return 0;
}

