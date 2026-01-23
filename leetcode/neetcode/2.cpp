class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int> freq;
       for(auto i:s){
        freq[i]++;
       }
       for(auto i:t){
        freq[i]--;
       }
       for(auto i:freq){
        if(i.second!=0){
            return false;
        }
       }
       return true;
       
    }
};

/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

*/