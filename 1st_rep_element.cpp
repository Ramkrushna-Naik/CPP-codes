/*Arrays Challenge-First Repeating Element

(Amazon, Oracle)

Problem
Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
Constraints
1 <= N <= 106
0 <= Ai <= 106
Example
Input:
7
1 5 3 4 3 5 6
Output:
2
Explanation:
5 is appearing twice and its first appearance is at index 2 which is less than 3
whose first occurring index is 3.
Solution
Base idea: To check if an element is repeating, we maintain an array idx[], which
stores the first occurrence (index) of a particular element a[i].
Steps
1. Initialise the idx[] with -1, and minidx with INT_MAX.

2. Keep updating idx[], while traversing the given array.*/

/*Arrays Challenge-Longest Arithmetic Subarray

(Google kickstart)

Problem
An arithmetic array is an array that contains at least two integers and the
differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
not arithmetic arrays.
Sarasvati has an array of N non-negative integers. The i-th integer of the array is
Ai
. She wants to choose a contiguous arithmetic subarray from her array that has
the maximum length. Please help her to determine the length of the longest
contiguous arithmetic subarray.
Input
The first line of the input gives the number of test cases, T. T test cases follow.
Each test case begins with a line containing the integer N. The second line
contains N integers. The i-th integer is Ai
.

Output
For each test case, output one line containing Case #x: y, where x is the test case
number (starting from 1) and y is the length of the longest contiguous arithmetic
subarray.*/
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
    int N=1e6+2;
    int idx[N];
    int mx= 1000;
    for (int i = 0; i <N; i++)
    {
        idx[i]=-1;
        
    }
   for (int i = 0; i < n; i++)
   {
       if(idx[a[i]] != -1)
       {
            mx=min(mx, idx[a[i]]);
       }
       else
       {
           idx[a[i]]=i;
       }
       
    
   }
   if(mx == 1000)
   {
       cout<<"-1";
   }
   else
   cout<<mx+1<<" ";
   
    return 0;
    
}
