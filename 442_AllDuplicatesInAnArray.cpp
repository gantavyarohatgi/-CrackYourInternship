class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<bool> check(nums.size(),false);
        vector<int> store;

        int i;
        for(i=0;i<nums.size();i++)
        {
            if(check[nums[i]] == true)
            {
                store.push_back(nums[i]);
            }

            else
            check[nums[i]] = true;
        }

        return store;
    }
};