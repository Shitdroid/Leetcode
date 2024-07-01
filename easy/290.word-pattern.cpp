/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> m;
        map<string,char> m2;
        string word;
        istringstream iss(s);
        int i=0;
        while(iss>>word){
            if(i==pattern.size())return false;
            if(m.find(pattern[i])!=m.end()){
                if(m[pattern[i]]!=word)return false;
            }else{
                if(m2.find(word)!=m2.end())return false;
                m[pattern[i]]=word;
                m2[word]=pattern[i];
            }
            i++;
        }
        return i==pattern.size();
    }
};
// @lc code=end

