class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int result = 0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            if((i->second)>1){
                result=i->first;
            }
        }
        return result;
    }
};