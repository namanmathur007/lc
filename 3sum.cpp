class Solution {
public:
   vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        vector<vector<int>>v;
        int l,r;
        
        int z=INT_MAX;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=z){
                z=nums[i];
                nums[i]=nums[i]*(-1);
                l=i+1,r=nums.size()-1;
                while(l<r){
                    if(nums[l]+nums[r]==nums[i]){
                        v.push_back({nums[i]*(-1),nums[l],nums[r]});
                        l++;
                        while(l<r && nums[l]==nums[l-1])l++;
                    }
                    else if(nums[l]+nums[r]<nums[i])l++;
                    else r--;
                }   
            }
        }
        
        return v;
    }
};
