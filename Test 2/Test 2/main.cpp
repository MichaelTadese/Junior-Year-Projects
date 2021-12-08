#include <iostream>
using namespace std;
int main()
{
  int array[10];
  int size=10;
  int max;
  int min;
   cout<<"INPUT THE 10 NUMBERS: "<<endl;
  for (int i=0;i<size;i++)
  {
    cin>>array[i];
  }
  max=array[0];
  for(int i=0;i<size;i++)
  {
    if(max<array[i])
       max=array[i];
  }
  min=array[0];
  for(int i=0;i<size;i++)
  {
    if(min>array[i])
       min=array[i];
  }
    cout<<"THE MAXIMUM FROM THE SET OF NUMBERS IS: "<<max<<endl;
    cout<<"THE MINIMUM FROM THE SET OF NUMBERS IS: "<<min<<endl;
  return 0;
}
