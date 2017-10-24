class Solution {  
public:
    vector<string> findWords(vector<string>& words) {
        int key[26];
        key['q'-'a'] = 0;
        key['w'-'a'] = 0;
        key['e'-'a'] = 0;
        key['r'-'a'] = 0;
        key['t'-'a'] = 0;
        key['y'-'a'] = 0;
        key['u'-'a'] = 0;
        key['i'-'a'] = 0;
        key['o'-'a'] = 0;
        key['p'-'a'] = 0;
        
        key['a'-'a'] = 1;
        key['s'-'a'] = 1;
        key['d'-'a'] = 1;
        key['f'-'a'] = 1;
        key['g'-'a'] = 1;
        key['h'-'a'] = 1;
        key['j'-'a'] = 1;
        key['k'-'a'] = 1;
        key['l'-'a'] = 1;
    
        key['z'-'a'] = 2;
        key['x'-'a'] = 2;
        key['c'-'a'] = 2;
        key['v'-'a'] = 2;
        key['b'-'a'] = 2;
        key['n'-'a'] = 2;
        key['m'-'a'] = 2;

        
        
        
        int total = 0;
        vector<string> ans;
        for(int i=0;i<words.size();i++)
        {
            bool flag = false;
            total = 0;
            for(int j=0;j<words[i].size();j++)
            {
                if(j==0)
                {
                    if(key[tolower(words[i][j])-'a'] == 0)
                    {
                        total = 0;
                    }
                    else if(key[tolower(words[i][j])-'a'] == 1)
                    {
                        total = 1;
                    }
                    else if(key[tolower(words[i][j])-'a'] == 2)
                    {
                        total = 2;
                    }   
                }
                else
                    if(key[tolower(words[i][j])-'a'] != total) 
                    {
                        flag = true;
                        break;
                    }
                
            }
            
            if(flag == true) continue;
            else ans.push_back(words[i]);
        }
        
        return ans;
        
        
    }
};
