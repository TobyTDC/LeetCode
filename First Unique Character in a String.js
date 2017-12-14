/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
    let templete = 'abcdefghijklmnopqrstuvwxyz';
    let res = s.length
    
    for (i=0; i<templete.length; i++) {
        index = s.indexOf(templete[i])
        if (index !== -1 && index  == s.lastIndexOf(templete[i])) {
            res = Math.min(res, index)
        }
    }
    
    if (res === s.length) {
        return -1
    } else {
        return res
    }
    
