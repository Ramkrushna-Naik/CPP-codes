/*
Kth array element after M replacements of array elements by XOR of adjacent pairs

Given an array arr[] of size N and two integers M and K, the task is to find the array element 
at the Kth index after performing following M operations on the given array.
*/

#include <bits/stdc++.h>
using namespace std;

int xorrep(int a[],int n,int m ,int k){
    for(int j=0;j<m;j++)
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]^a[i+1];
    }
    return a[k];
}

int main(){
    int a[100],n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p=xorrep(a,n,m,k);
    cout<<p;
    return 0;
}