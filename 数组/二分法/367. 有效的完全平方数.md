class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 1, end = num , mid;
        while(start <= end){
            mid = start + (end - start)/2;
            if(num / mid == mid)
                break;
            
            if(num/ mid > mid)
                start = mid+1;
            else
                end = mid -1;
        }

        return start <= end && num % mid ==0;
    }
};
