//time complexity:o(n)
//space complexity:o(n)

#include<iostream>
using namespace std;
#include<stack>
#include<vector>
vector<int> findnge(vector<int>&nums){
    stack<int>st;
     int n=nums.size();
    vector<int>result(n);
   
    for(int i=n-1;i>=0;i--){
        while(!st.empty() &&nums[i]>=st.top()){
            st.pop();
        }
        if(st.empty()){
            result[i]=-1;
        }
        else{
            result[i]=st.top();
        }
        st.push(nums[i]);

    }
    return result;
}
int main(){
    vector<int>nums={4,1,7,0};
    vector<int>ans=findnge(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}