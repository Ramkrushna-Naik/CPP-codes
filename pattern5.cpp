#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int j;
        for (j=1; j <=(a-i); j++)
        {
            cout<<" ";
        }
        int k=i;
      	for (; j <=a; j++)
        {
            cout<<k--<<" ";
        
        }
        k=2;
        for(;j<=(a+i); j++){
        	cout<<k++<<" ";
		}
		for(;j<=(2*a-1); j++){
        	cout<<" ";
		}
        cout<<endl;
    }
    return 0;
}
