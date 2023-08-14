// Sort Colors
// Time Complexity : O(n^2)
// Space Complexity : O(1)

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        // Space Complexity : O(1)
        // Bubble Sort
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    continue;
                }
                if (nums[i] > nums[j])
                {
                    int t = nums[i];
                    nums[i] = nums[j];
                    nums[j] = t;
                }
            }
        }
    }
};