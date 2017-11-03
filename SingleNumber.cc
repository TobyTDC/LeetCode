#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (const int number : nums) {
            ans = ans ^ number;
        }        

        return ans;
    }
};
