#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {  
        cout << "nums = [";
        
        int size = nums.size();
       
        for (int i = 0; i < size; i++) {
            cout << nums[i] << " ";
        }
        cout << "], target = " << target << endl;

        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] + nums[j] == target) {
                    cout << "because nums[" << i << "] + nums[" << j << "] == " 
                         << target << ", so return [" << i << "," << j << "]" << endl;
                    return {i, j};
                }
            }
        }

        return {};
    }
};


