/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26,0);
        for(int i=0;i<magazine.size();i++){
            freq[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++){
            if(freq[ransomNote[i]-'a']==0)return false;
            freq[ransomNote[i]-'a']--;
        }
        return true;
    }
};
// @lc code=end

