class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n)
    {
      
        int end = m+n-1;
        int end1 = m -1;
        int end2 = n -1;

        while(end2 >= 0){
            if(end1 >=0){
                a[end--] = a[end1] > b[end2] ? a[end1--] : b[end2--];
            }else{
                a[end--] = b[end2--];
            }
        }
    }
};
