class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            if((i->second)>n/2){
                ans=i->first;
            }
        }
        return ans;
    }
};