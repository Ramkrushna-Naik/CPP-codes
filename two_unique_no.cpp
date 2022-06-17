/*Q2. Write a program to find 2 unique numbers in an array where all numbers
except two, are present twice.

Logic
1. Take XOR of all the elements and let that xor value be x. All the repeating
elements will get nullified and xor of only two unique elements will last. (as
a⊕a = 0).
2. There will be at least one bit set in x. Using that set bit, divide the original
set of numbers into two sets
a. First set which contains all the elements with that bit set.
b. Second set which contains all the elements with that bit unset.
3. Take xor of both the sets individually, and let those xor values be x1 and x2.
4. Voila, x1 and x2 are our unique numbers. Reason: both the above sets
contain one of the unique elements and rest elements of the sets occur
twice which will get nullified after ⊕ operation.*/

#include <bits/stdc++.h>
using namespace std;

int Setbit(int a, int n){
        return((a & (1 << n)) != 0 ) ;
}

int unique2(int a[],int n){
    int xorsum=0;
    for (int i = 0; i < n; i++)
    {
        xorsum=xorsum ^ a[i];
    }
    int tempxor=xorsum;
    int pos=0,setbit=0;
    while(setbit!=1)  //this loop will give us the right most 1
    {
        setbit = xorsum & 1;   
        pos++;
        xorsum=(xorsum>>1);
    }
    int newxor=0;
    for (int i = 0; i < n; i++)
    {
        if(Setbit(a[i],pos-1)){
            newxor=newxor ^ a[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(newxor ^ tempxor) << endl;
    
    
}

int main(){
    int arr[]={2,4,6,7,4,5,6,2};
    unique2(arr,8);
    return 0;
}