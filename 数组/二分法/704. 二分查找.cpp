
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = size(nums);

        // 第一重区间写法
        int left = 0, right = n -1, middle;
        while(left <= right){
            middle = (left + right )/2;
            if(nums[middle] == target)
                return middle;
            if(nums[middle] < target)
                left = middle + 1;
            else 
                right = middle -1;
        }
         
        return -1;

        // 第二种区间写法
        // int left = 0, right = n, middle = -1;
        // while(left < right){
        //     middle = (left + right) /2;
        //     if(nums[middle] == target)
        //         return middle;
            
        //     if(nums[middle] > target)
        //         right =middle;

        //     else 
        //         left = middle + 1;
        // }
        // return -1;
    }
};
