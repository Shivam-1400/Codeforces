#include <bits/stdc++.h>
using namespace std;

bool myCompare(pair<int, int> p1, pair<int, int> p2){
    return p1.first<p2.first;
}
int findDiff(pair<int, int> p1, pair<int, int> p2){
    int diff= abs((p1.first*60+p1.second)- (p2.first*60+p2.second));

}

int main(){
    int t;
    cin>>t;
    int n, sh, sm;

    
   
    while(t--){
        cin>>n>>sh>>sm;
        int a, b;
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++){
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(), v.end(), myCompare);
        cout<<"Sorted:";
        for(int i=0; i<n; i++){
            cout<<v[i].first<<"  ";
            cout<<v[i].second<<endl;

        }

    }

}