class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length() ) return false;
        unordered_map<int,int> freqs;
        unordered_map<int,int> freqt;   
        for(int i=0; i<s.length(); i++){
            freqs[s[i]]++;
            freqt[t[i]]++;
        }
        return freqs==freqt;
    }
};
