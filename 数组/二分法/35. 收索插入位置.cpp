
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = size(nums);
        int left = 0, right = n - 1, middle ;
        int ans = 0;
        while(left <= right){
            middle = (left + right) /2;
            if(nums[middle] >= target){
                ans = middle;
                right = middle -1;
            }
            else    
                left = middle + 1;
        }
        return left;
        // int left = 0, right = n, middle ;
        // while(left < right){
        //     middle = (left + right) /2;
        //     if(nums[middle] == target)
        //         return middle;
        //     if(nums[middle] > target)
        //         right = middle;
        //     else    
        //         left = middle + 1;
        // }
        // return right;
    }
};
