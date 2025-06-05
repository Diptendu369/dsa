#include<bits/stdc++.h>
using namespace std;    
int main(){
    vector<int> vec ={0,1,1,0,0,1,0,1,0,0,1};
    int n = vec.size();
    int c0= count(vec.begin(), vec.end(), 0);
    int c1 = n - c0;
    vector<int> ans;
    for(int i=0;i<c0;i++){
        ans.push_back(0);
    }
    for(int i=0;i<c1;i++){
        ans.push_back(1);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}