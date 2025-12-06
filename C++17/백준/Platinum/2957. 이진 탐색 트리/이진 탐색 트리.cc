#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    
    int N; if(!(cin>>N)) return 0;
    
    vector<int>a(N); for(int i=0;i<N;i++) cin>>a[i];
    
    set<int>s; vector<int>d(N+1,-1); long long C=0;
    
    s.insert(a[0]); d[a[0]]=0; cout<<0<<"\n";
    
    for(int i=1;i<N;i++){
        int x=a[i]; auto it=s.lower_bound(x);
        int L=-1,R=-1;
        if(it!=s.end()) R=d[*it];
        if(it!=s.begin()){ --it; L=d[*it]; }
        d[x]=max(L,R)+1; s.insert(x); C+=d[x];
        cout<<C<<"\n";
    }
    
}
