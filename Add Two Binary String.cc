#include <iostream>
#include <string>
#include <bitset>
#include <math.h>

using namespace std;


class Solution {
public:
    int equalize(string &a, string &b){
        int lena = a.size();
        int lenb = b.size();
        
        if(lena == lenb) return lena;
        if(lena > lenb){
            for(int i = 0; i < lena - lenb; ++i){
                b = '0' + b;
            }
            
            return lena;
        }
        
        for(int i = 0; i< lenb - lena; ++i){
            a = '0' + a;
        }
        
        return lenb;
        
    }
    string addBinary(string a, string b) {
        
        int len = equalize(a, b);
        
        string result;
        
        int carry = 0;
        
        for(int i = len-1; i >=0; i--){
            
            int digita = a[i] - '0';
            int digitb = b[i] - '0';
            
            int sum = (digita ^ digitb ^ carry) + '0';
            
            result = (char)sum + result;
            
            carry = (digita&&carry)|(digitb&&carry)|(digita&&digitb);
            
        }
        
        if(carry){
            result = '1' + result;
        }
        
        return result;
        
        
        
    }
};
