#include <bits/stdc++.h>
using namespace std;
int ins_sort(int arr[], int n)
{
   
    for (int i = 1; i < n; i++)    
        {
            int current=arr[i];
            int j=i-1;
            while (arr[j]>current && j>=0)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=current;
        }
        
}
int  main()
{
    int a[100],n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
   ins_sort(a,n);
   for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
    
}
