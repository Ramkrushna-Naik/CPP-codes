#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=1;i<=a;++i)
    {
        int k=a-i;
        for (int j=1; j <=k; ++j)
        {
            cout<<" ";
        }
      	for (int j=1; j <=a; ++j)
        {
            	cout<<"*";
        
        }
        cout<<endl;
    }
    return 0;
}
