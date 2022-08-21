#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0; i<n; i++){
            A[i]=i+1;
        }cout<<n<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<A[j]<<" ";
            }cout<<endl;
            int temp= A[n-i-2];
            A[n-i-2]= A[n-i-1];
            A[n-i-1]= temp;
        }
    }
}