#include <bits/stdc++.h>
using namespace std;
int linear(int arr[], int n,int key)
{
    for (int i = 0; i <=n ; i++)
    {
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int  main()
{
    int a[100],n,key;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    cout<<"enter the key to find";
    cin>>key;
    int flag=linear(a,n,key);
    if(flag>0){
        cout<<"found at"<<flag+1;
    }
    else {
        cout<<"not found";
    }
    return 0;
    
}
