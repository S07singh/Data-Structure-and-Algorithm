#include<iostream>
#include<vector>
#include<algorithm> // we have to this because of sort
//#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement( vector <int>& nums) {
       int n = nums.size();

    // Brute force

    //    for(int val : nums) { 
    //     int freq = 0;

    //     for(int el : nums) {
    //         if(el == val) {
    //             freq++;
    //         }
    //     }
    //     if(freq >  n/2) {
    //         return val;
    //     }
    //    } 
    //     return -1;//  TC O(n^2)


    // more optimize solution with sorting

    // sort
        //  sort(nums.begin(), nums.end()); // TC O(nlogn) for sorting

        // //  // freq

        //  int freq = 1, ans = nums[0];
        //  for(int i = 1; i<n; i++) {
        //     if(nums[i] == nums[i-1]) {
        //         freq++;
        //     }else {
        //         freq = 1;
        //         ans = nums[i];
        //     }
        //     if(freq > n/2) {
        //         return ans;
        //     }
        //  } // overall TC(sorting +loop) = O(nlogn + n) = O(nlogn)

        //  return ans;


        // Moore's

        int freq = 0, ans = 0;
        for (int i = 0; i<nums.size(); i++) {
            if(freq == 0) {
                ans = nums[i];
            }
            if(ans == nums[i]) {
                freq++;
            } else {
                freq--;
            }
        }

/*        int count = 0;
        for(int val : nums) {
            if(val == ans) {
                count++;
            }
        }

        if(count > n/2)
            return ans; //=> ans
        else
            return -1; //=> -1 */

        return ans;
    }    
};

int main(){

    //  vector <int> nums = {3,2,3};
     vector <int> nums = {2, 2, 1, 1, 1, 2, 2};
     Solution s;
     
     cout<<s.majorityElement(nums);
    
    return 0;
}