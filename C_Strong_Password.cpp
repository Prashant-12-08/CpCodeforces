#include<bits/stdc++.h>
using namespace std;

void solve(){ 
   int m;
   string s,l,r;
   cin>>s>>m>>l>>r;

   vector<vector<int>> dig(10);
   int n  = s.size();

   for(int i=0;i<n;i++){
       int el = (int) s[i]-48;
       dig[el].push_back(i);
   }

   int prevElInd =-1;
   for (int i=0;i<m;i++){
         int s = (int)l[i]-48;
         int e = (int)r[i]-48;
        if(s>e){
            swap(s,e);
        }
        int currElInd = -1;
        for(int num = s;num<=e;num++){
                auto found = lower_bound(dig[num].begin(),dig[num].end(),prevElInd+1);
                if(found!=dig[num].end()){
                    if((*found)>prevElInd){
                        currElInd = max(currElInd,*found);
                    }
                    else{
                        cout<<"YES"<<endl;
                        return;
                    }
                }
                if(found == dig[num].end() ) {
                   cout<<"YES"<<endl;
                   return ;
                }
                
        }
        // cout<<i<<" "<<prevElInd<<" "<<currElInd<<endl;
        prevElInd = currElInd;
   }
   cout<<"NO"<<endl;
}


int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}