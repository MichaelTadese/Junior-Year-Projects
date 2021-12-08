#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int bin2Dec(const string& binaryString);
int binarychartodecimal(char ch);

int main()
{
    cout << "Enter a hex number: ";
    string binaryString;
    cin >> binaryString;
    
    cout << "The decimal value for hex number " << binaryString << " is " << bin2Dec(binaryString) << endl;
    
    return 0;
}

int bin2Dec(const string& binaryString)
{
    int decimalValue=0;
    for (unsigned i = 0; i < binaryString.size(); i++)
        decimalValue = decimalValue * 2 + binarychartodecimal(binaryString[i]);
    return decimalValue;
}

int binarychartodecimal(char ch)
{
    ch = toupper(ch);
    if (ch >='A' && ch <= 'F')
        return 10 + ch - 'A';
    else // ch is '0', '1', ..., or '9'
        return ch -'0';
}





