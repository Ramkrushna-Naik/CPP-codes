#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,check=0;
    cin>>a;
    for(int i=2;i<sqrt(a);i++)
    {
        if(a%i==0)
        {
            ++check;
        }
    }
    if(check!=0)
    {
        cout<<"not prime";
    }
    else 
    cout<<"prime";
    return 0;
}