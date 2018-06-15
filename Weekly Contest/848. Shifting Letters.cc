class Solution {
public:
    string shiftingLetters(string S, vector<int>& shifts) {
        string result = S;
        long long sum = 0;
        for (auto shift : shifts) {
            sum += shift;
        }
        
        for (int i = 0; i < shifts.size(); i++) {
            int shift = sum % 26;
            int distanceToa = result[i] - 'a';
            int actualShift = (distanceToa + shift) % 26;
            result[i] = ('a' + actualShift);
            sum -= shifts[i];
        }
        
        return result;
        
    }
};
