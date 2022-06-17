#include <bits/stdc++.h>
using namespace std;
int binary(int arr[], int n,int key)
{
    int s=0,e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
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
    int flag=binary(a,n,key);
    if(flag>0){
        cout<<"found at"<<flag+1;
    }
    else {
        cout<<"not found";
    }
    return 0;
    
}


