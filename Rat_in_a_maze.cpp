#include <iostream>
using namespace std;

bool test(int a[5][5],int x,int y,int n){
    if (x>n && y>n && a[x][y]==0){
        return false;
    }
    return true;
}

bool ratinamaze(int a[5][5],int x,int y,int n,int sol[5][5]){
    
    if(x==n-1 && y==n-1){
        return true;
    }
    
    if (test(a,x,y,n)){
        sol[x][y]=1;
        if(ratinamaze(a,x,y+1,n,sol))
        {
            return true;
        }
        if(ratinamaze(a,x+1,y,n,sol))
        {
            return true;
        }
        sol[x][y]=0;
        return false;
    }
    return false;
}


int main(){
    int a[5][5],n;
    int solu[5][5];
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            solu[i][j]=0;
            }
    }
    if(ratinamaze(a,0,0,n,solu)){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<solu[i][j]<<" ";
            }
        cout<<endl;
        }
    }
}

