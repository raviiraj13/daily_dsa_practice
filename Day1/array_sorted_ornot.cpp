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


//method1


//for leetcode
// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int size = nums.size();
//         int durandhar = 0;
//         for(int i = 0;i < nums.size();i++){
//             if(nums[i]>nums[(i+1) % size]) durandhar++;
//         }
//         if( durandhar > 1) return false;
//         else return true;
//     }
// };


//method 2


// for leetcode
// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int check=0;
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]>nums[i+1]) check++;
//         }
//         int j=nums.size()-1;
//         if(nums[j]>nums[0]) check++;
//         if(check >= 2) return false;
//         else return true;
//     }
// };
