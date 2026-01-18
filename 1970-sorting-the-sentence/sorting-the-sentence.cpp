class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10);
        int n = s.size();
        int i = 0;
        while (i < n) {
            string word = "";
            while (i < n && !isdigit(s[i])) {
                word += s[i];
                i++;
            }
            int idx = s[i] - '0';
            words[idx] = word;
            i++;
            if (i < n && s[i] == ' ')
                i++;
        }
        string ans = "";
        for (int i = 1; i < 10; i++) {
            if(words[i]!=""){
                ans+=words[i]+" ";
            }
        }
        ans.pop_back();
        return ans;
    }
};