class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        //Merge Sort : Brute Force Algorithm
        //Merging and Sorting the Two Vectors 
        
        int n1=nums1.size();
        int n2=nums2.size();
        int N=n1+n2;
        vector<int> nums3(N);
        int i=0,j=0,k=0;    
        while(i<n1 && j<n2)
        {
            if(nums1[i]<nums2[j])
            {
                nums3[k++]=nums1[i++];
            }
            else
            {
                nums3[k++]=nums2[j++];
            }
        }
        while(i<n1)
        {
            nums3[k++]=nums1[i++];
        }
        while(j<n2)
        {
            nums3[k++]=nums2[j++];
        }

    //Finding the Median 
        double median=0.0;
        if(N%2==0)
        {
            median=(nums3[(N/2)-1]+nums3[N/2])/2.0;
        }
        else
        {
            median=nums3[N/2];
        }

        return median;

    }

};