class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eSum = 0;
        int dSum = 0;
        int n = nums.size();
        for(int i = 0; i<n;i++){
            eSum = eSum+nums[i];
            while(nums[i]>0){
                dSum = dSum+(nums[i]%10);
                nums[i]/=10;
            }
        }
    int diff = abs(eSum-dSum);
    return diff;}
};