class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even,odd;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0){
            even.push_back(nums[i]);
        }
        else{
            odd.push_back(nums[i]);
        }
    }
    int k=0;
    for(int i=0;i<nums.size();i+=2){
        nums[i]=even[k];
        k++;
    }
    k=0;
    for(int i=1;i<nums.size();i+=2){
        nums[i]=odd[k];
        k++;
    }
    return nums;
}
};