class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) { 
        int leftIdx = -1, rightIdx = -1;
        int n = size(nums);
        int start = 0, end = n-1, mid;
        //方法二
        //寻找左边界
        while(start <= end){
            mid = start + (end - start)/2;
            if(nums[mid] >= target)
                end = mid -1;
            else 
                start = mid +1;
        }
        
        if(start < n && nums[start] == target)
            leftIdx = start;
        else 
            return vector<int> {-1, -1};

        //寻找右边界
        start = 0; end = n -1;
        while(start <= end){
            mid = start + (end - start)/2;
            if(nums[mid] <= target)
                start = mid +1;
            else
                end = mid -1;
        }
        rightIdx = end;
        return vector<int> {leftIdx, rightIdx};

        // 方法一
        // // 寻找左边界
        // while(start <= end){
        //     mid = start + (end - start)/2;
        //     if(nums[mid] >= target){
        //         if(nums[mid] == target)
        //             leftIdx = mid;
        //         end = mid -1;
        //     }
        //     else
        //         start = mid +1;
        // }

        // if (leftIdx == -1)
        //     return vector<int>{-1,-1};

        // //寻找右边界
        // start = 0; end = n-1;
        // while(start <= end){
        //     mid = start + (end - start)/2;
        //     if(nums[mid] <= target){
        //         if(nums[mid] == target)
        //             rightIdx = mid;
        //         start = mid +1;
        //     }
        //     else
        //         end = mid - 1;
        // }
        // return vector<int>{leftIdx,rightIdx};        
    }
};
