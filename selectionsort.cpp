#include <bits/stdc++.h>
using namespace std;
int sel_sort(int arr[], int n)
{
    for (int i = 0; i <=n ; i++)
        for (int j = i+1; j <=n; j++)
        {
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
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
   sel_sort(a,n);
   for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
    
}
