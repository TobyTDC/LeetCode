class Solution {
    func isValid(_ s: String) -> Bool {
        var stack = [Character]()

        for c in s {
            switch c {
                case "}":
                  guard let p = stack.popLast() else {
                    return false
                  }
                  if p != "{" {
                      return false
                  }
                case "]":
                  guard let p = stack.popLast() else {
                    return false
                  }
                  if p != "[" {
                      return false
                  }
                case ")":
                  guard let p = stack.popLast() else {
                    return false
                  }
                  if p != "(" {
                      return false
                  }
                case "(","[","{" :
                  stack.append(c)
                default:
                  break
            }
        }
        return stack.isEmpty
    }
}
