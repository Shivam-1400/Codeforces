#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[2][n];
        for(int i=0; i<2; i++){
            for(int j=0; j<n; j++){
                cin>>A[i][j];
            }
        }
        int s=0;
        int i=0, j=0;
        while(i*j !=1*n){
            if(i=0 && A[0][j+1]<A[i+1][j] && ){
                s=s+A[i][j];
            }
            s=s+A[i][j];
        }
    }
}