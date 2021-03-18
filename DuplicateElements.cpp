class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0,n=nums.size();
        if(n==0)return 0;
        if(n==1) return 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[index]) {
                nums[++index] = nums[i];
            }
        }
        return index + 1;
    }
};
