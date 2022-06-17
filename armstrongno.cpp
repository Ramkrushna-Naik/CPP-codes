#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,rem=0,sum=0;
    cin>>a;
    int c=a;
    while(a>0)
    {
        rem=a%10;
        sum+=pow(rem,3);
        a=a/10;
    }
    if(sum==c)
    cout<<"armstrong number";
    else
    cout<<"not armstrong"<<sum;
    return 0;
}