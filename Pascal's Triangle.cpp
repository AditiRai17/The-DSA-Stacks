// What is Pascal's Triangle?
// https://www.mathsisfun.com/pascals-triangle.html

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> vec(numRows);
        int col[numRows];
        for (int s = 0; s < numRows; s++)
        {
            col[s] = s + 1;
        }
        for (int i = 0; i < numRows; i++)
        {
            vec[i] = vector<int>(col[i]);
            int k = 0;
            for (int j = 0; j < col[i]; j++)
            {
                if (j == 0 || j == (col[i] - 1))
                {
                    vec[i][j] = 1;
                }
                else
                {
                    if (k == 0 || k <= (col[i - 1]))
                    {
                        vec[i][j] = vec[i - 1][k] + vec[i - 1][k + 1];
                        k++;
                    }
                }
            }
        }
        return vec;
    }
};