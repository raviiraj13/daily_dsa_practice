#include<iostream>
using namespace std;
bool check(vector<int>& nums){
    int size = nums.size();
    int dhurandhar = 0;
    for(int i=0;i<size;i++){
        if(nums[i]>nums[(i+1)%size]) dhurandhar++;
    }
    if(dhurandhar>1) return false;
    else return true;
}
int main(){
    vector<int> nums = {3,4,5,1,2};
    cout<<"nums is sorted : "<<check(nums);
     return 0;
}