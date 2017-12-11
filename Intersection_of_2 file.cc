class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> res, st(nums1.begin(), nums1.end());
        
        for(int i = 0; i < nums2.size(); ++i){
            if(st.count(nums2[i])) res.insert(nums2[i]);
        }
        
        return vector<int> (res.begin(), res.end());
    }
};
