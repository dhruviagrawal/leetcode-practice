class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
            for(auto x:nums)
            {
                int i=0;
                while(x)
                {
                    int d=x%10;
                    i++;
                    x/=10;
                }
                if(i%2==0)count++;
            }
        return count;
    }
};
