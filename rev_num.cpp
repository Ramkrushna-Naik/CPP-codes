#include <iostream>

using namespace std;
int main()
{
    int a,rem=0,rev=0;
    cin>>a;
    while(a>0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    cout<<"rev number"<<rev;
    return 0;
}