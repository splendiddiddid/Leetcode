class Solution {
public:
    int mySqrt(int x) {
        int le =1, ri = x, mid;
        int ans = 0;
        while(le <= ri){
            mid = le + (ri - le)/2;
            if(x/mid >= mid){
                ans = mid;
                le = mid+1;
            }
            else
                ri = mid -1;
        }
        return ans;
        // while(le <= ri){
        //     mid = le + (ri -le)/2;
        //     if( x / mid == mid)
        //         return mid;
        //     if( x/mid > mid)
        //         le = mid + 1;
        //     else 
        //         ri = mid -1;
        // }
        // return ri;
    }
};
