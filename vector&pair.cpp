#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<vector<pair<pair<int,int>,string>>> v2d;
    
    vector<pair<pair<int,int>,string>>v1d;
    
    pair<pair<int,int>,string> xy;
    xy.first.first = 2;
    xy.first.second = 3;
    xy.second = "yes";
    
    v1d.push_back(xy);
    v1d.push_back(make_pair(make_pair(4,5),"No"));
    
    v2d.push_back(v1d);
    
    for(auto e: v2d){
        for(auto p: v1d)
        {
            cout<<"x="<<p.first.first<<" y="<<p.first.second<<" "<<p.second;
            cout<<endl;
        }
        
    }
    
    
  
    
}
