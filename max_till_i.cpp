#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int a[10],n,mx=-1999;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
   for (int i = 0; i <n; i++)
    {
        mx=max(mx,a[i]);
       cout<<mx<<" ";
    }
    return 0;
    
}
