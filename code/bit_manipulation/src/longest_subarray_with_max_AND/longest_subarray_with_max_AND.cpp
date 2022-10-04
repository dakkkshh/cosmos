#include<iostream>
#include<vector>
using namespace std;
int longest_subarray_with_max_AND(vector<int> &v){
    int maxElem = -1e9;
    for(auto &x:v) maxElem = max(maxElem,x);
    int ans = 0,curLen = 0;
    for(auto &x:v){
        if(x==maxElem) curLen++;
        else curLen = 0;
        ans = max(ans,curLen);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int ans = longest_subarray_with_max_AND(v);
    cout<<ans<<endl;
    return 0;
}