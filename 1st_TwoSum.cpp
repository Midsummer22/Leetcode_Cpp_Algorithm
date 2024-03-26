//LeetCode 
//1.Two Sum;

/*使用向量：
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0;i < nums.size() - 1;i++){
            for(int j = i + 1;j < nums.size();j++){
                if(nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0;i < nums.size() - 1;i++){
            for(int j = i + 1;j < nums.size();j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
