class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            if(x.second%2==0){
                continue;
            }
            else{
            return false;
            }
        }
        return true;
    }
};