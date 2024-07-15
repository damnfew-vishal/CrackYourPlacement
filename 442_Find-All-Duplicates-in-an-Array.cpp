class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            if((i->second)==2){
                ans.push_back(i->first);
            }
        }
        return ans;
    }
};