/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26,0);
        if(s.length()!=t.length())return false;
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            if(freq[t[i]-'a']==0)return false;
            freq[t[i]-'a']--;
        }
        return true;
    }
};
// @lc code=end

