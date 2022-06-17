#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int a[100],n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    
   for (int i = 0; i <n; i++)
        {
        int sum=0;
        for (int j = i; j < n; j++)
            {
                sum=sum+a[j];
                cout<<sum<<" ";
            }
        }
    return 0;
    
}
