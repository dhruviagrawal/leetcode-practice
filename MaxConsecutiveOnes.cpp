//Given a binary array, find the maximum number of consecutive 1s in this array.
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,i,countfinal=0;
        for(auto i:nums)
        {
            if(i)
                count++;
            else
            {
              countfinal=max(count,countfinal) ;
              count=0;
            }
        }
        return max(count,countfinal);
    }
};
