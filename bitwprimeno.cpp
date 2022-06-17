#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int a)
{
    int check=0;
    for(int i=2;i<sqrt(a);i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a,b,c;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(is_prime(i))
        {
            cout<<i<<" ";
        }
    }
   
    return 0;
}
