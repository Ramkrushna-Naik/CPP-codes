#include <iostream>
#include <cmath>
using namespace std;
int fabo(int n)
{
    int i,t1=0,t2=1;
    for(i=0;i<=n;i++)
    {
        cout<<t1<<" ";
        int next=t1+t2;
        t1=t2;
        t2=next;
    }
}
int main()
{
    int n;
    cin>>n;
    fabo(n);
    return 0;
}
