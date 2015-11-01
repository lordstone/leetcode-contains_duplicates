class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() <= 1) return false;
        map<int, bool> myHash;
        for(int num: nums){
            if(myHash.find(num) != myHash.end()) return true;
            else myHash.insert(pair<int, bool>(num, true));
        }
        return false;
    }
};
