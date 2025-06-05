#include<bits/stdc++.h>
using namespace std;
int largest2(vector<int> vec){
    int a = vec[0];
    int b = vec[1];
    
}
int main(){
    vector<int> vec;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    int high = *max_element(vec.begin(),vec.end());
    vec.erase(remove(vec.begin(),vec.end(),high),vec.end());
    int high2 = *max_element(vec.begin(),vec.end());
    cout<<"2nd largest element = "<<high2;
    return 0;
}

