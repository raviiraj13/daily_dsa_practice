#include<iostream>
#include<climits>
using namespace std;
int secondlargest(int* arr,int length){
    int max = INT_MIN;
    int smax = max;
    for(int i = 0;i < length;i++){
        if(arr[i]>max) {
            smax = max;
            max = arr[i];
        }else if(arr[i] > smax && arr[i] < max) smax = arr[i];
    }
    return smax;
}
int main(){
    int arr[7] = {32,5,1,21,41,3,2};
    int length = 7;
    cout<<"The second largest element in arr : "<<secondlargest(arr,length);
    return 0;
}

// for gfg
// class Solution {
//   public:
//     int getSecondLargest(vector<int> &arr) {
//         // code here
//         int max=INT_MIN;
//         int smax=max;
//         for(int i=0;i<arr.size();i++){
//             if(arr[i]>max){
//                 smax=max;
//                 max=arr[i];
//             }else if(arr[i]>smax && arr[i]<max) smax=arr[i];
//         }
//         return smax;
//     }
// };
