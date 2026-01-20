class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string word, result = "";
        while(ss>>word){
            int len = word.length();
            for(auto &it:word){
                it = tolower(it);
            }
            if(len>=3){
                word[0] = toupper(word[0]);
            }
            result+=word + " ";
        }
        result.pop_back();
        return result;
    }
};