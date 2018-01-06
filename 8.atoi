class Solution {
    func myAtoi(_ str: String) -> Int {
        var x = 0
        var i = 0
        var y = 1
        for s in str.utf8 {
            if i == 0{
                i = i + 1
                if s == 43 {
                    continue
                }else if s == 45{
                    y = -1
                    continue
                }else if s == 32 {
                    i = 0
                    continue
                }else if s>=48 && s<=59{
                    x = (x * 10) + (Int(s) - 48)
                    continue
                }else {
                    break
                }
            }
            if s>=48 && s<=59 {
                if (Double((x * 10) + (Int(s) - 48)) - 2147483647 <= 0 && y > 0) || (Double((x * 10) + (Int(s) - 48)) - 2147483648 <= 0 && y < 0){
                    x = (x * 10) + (Int(s) - 48)
                }else if y>0{
                    x = 2147483647
                    break
                }else if y<0 {
                    x = 2147483648
                }else {
                    break
                }
                
            }else {
                break
            }
        }
        return x * y
    }
}
