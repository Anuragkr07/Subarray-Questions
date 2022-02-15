class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       int n=nums.size();
        vector<vector<int>>ans={};
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
               vector<int>temp;
                for(int k=i;k<=j;k++)
                {
                    temp.push_back(nums[k]);
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
