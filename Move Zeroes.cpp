class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i ,j;
        for( i =0;i<n;i++){
            if(nums[i] == 0){
                j =i;
                i = j+1;
                break;
            }
        }
        while(i<n){
        if(nums[i] != 0) {
            swap(nums[j],nums[i]);
                j++;
                i++;
        }
        else{
            i++;
        }
        }
    }
};
