class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int prevSum=0, count=0;
        for(int i=0;i<nums.size();i++){
            prevSum+=nums[i];
            int remove=prevSum-k;
            count+=mp[remove];
            mp[prevSum]+=1;
        }
        return count;
    }
};