/*Count minimum number of fountains to be activated to cover the entire garden

There is a one-dimensional garden of length N. In each position of the N length garden, a fountain has been installed. Given an array a[]such that a[i] describes the coverage limit of ith fountain. A fountain can cover the range from the position max(i – a[i], 1) to min(i + a[i], N). In beginning, all the fountains are switched off. The task is to find the minimum number of fountains needed to be activated such that the whole N-length garden can be covered by water.

Examples:

Input: a[] = {1, 2, 1}
Output: 1
Explanation:
For position 1: a[1] = 1, range = 1 to 2
For position 2: a[2] = 2, range = 1 to 3
For position 3: a[3] = 1, range = 2 to 3
Therefore, the fountain at position a[2] covers the whole garden.
Therefore, the required output is 1.

Input: a[] = {2, 1, 1, 2, 1} 
Output: 2 
*/

#include <bits/stdc++.h>
using namespace std;

int fountain(int ranges[],int n){

    int min = 0;
      int max = 0;
      int open = 0;
      int index = 0;
      while(max<n){ //10
          
          for(int i=index;i<n;i++){      
            if(i-ranges[i]<=min && i+ranges[i]>max){
                max = i+ranges[i];  
                index = i;
            }
          }
          if(min==max)return -1;
          open++;
          min = max;    
      }
        
     return open;
    
}

int main(){
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<fountain(a,n);
}
