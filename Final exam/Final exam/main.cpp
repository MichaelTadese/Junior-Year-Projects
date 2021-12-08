#include <iostream>
using namespace std;
// FUNCTION 1
int getInput()
{
int num ;
    cout << "INPUT A NUMBER. To end or exit input a negative: ";
    cin >> num ;
    
    return num;
}
// FUNCTION 2
void display(int arr[], int n){
    for(int i = 0 ; i < n-1; i++)
        cout << arr[i] << ", ";
    cout << arr[n-1] << endl ;
}

int main()
{
  int arr[10];
  int numbr ;
  int num = 0 ;
    while(true){
        numbr = getInput();
        if (numbr < 0)
            break;
        else{
            if(num == 0){
                arr[num] = numbr ;
            }
            else{
                for(int i = num; i > 0; i--){
                    arr[i] = arr[i-1];
                }
                arr[0] = numbr ;
            }
            num++;
        }
        display(arr, num);
    }
    display(arr, num);
    return 0;
}

