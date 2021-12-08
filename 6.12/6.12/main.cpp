#include<iostream>
using namespace std ;

double compute(int i);

int main()
{
    cout<<"i"<<"\t\t"<<"m(i)"<<endl;
      for(int i=1;i<=20;i++)

    cout<<i<<"\t\t"<<compute(i)<<endl;
 
}
double compute(int i)
{
    if(i==1)
        return 1.0/2;
    else
        return compute(i-1)+i*1.0/(i+1);
}



