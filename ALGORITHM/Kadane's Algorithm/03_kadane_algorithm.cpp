#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT8_MIN;

        for(int val : nums) {
            currSum += val;
            maxSum = max(currSum, maxSum);

            if(currSum < 0) {
                currSum = 0;
            }
        }
        return maxSum;
    }
};

int main(){
    
    return 0;
}