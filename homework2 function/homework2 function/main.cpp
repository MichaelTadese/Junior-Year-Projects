#include <iostream>
using namespace std;

int getPentagonalnumber(int n)
{
    int answer;
    answer=n*(3*n-1)/2;
    
    return answer;
}
int main()
{
    for(int i=1; i<=10; i++)
    {
        cout <<"For n="<<i<<"the pentagonal is "<<getPentagonalnumber(i)<<endl;
    }
    return 0;
}
