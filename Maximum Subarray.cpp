class Solution {
public:    

//Kadane's Algorithm : Dynamic Programming 
//Time Complexity : O(n)
//Space Complexity : O(1)

    int maxSubArray(vector<int>& nums) {
        int maxsum=nums[0];
        int currsum=0;
        for(int i=0; i<nums.size() ;i++)
        {
            currsum+=nums[i];
            if(currsum>maxsum)
            {
                maxsum=currsum;
            }
            if(currsum<0)
            {
                currsum=0;
            }
        }
        return maxsum;
    }
};