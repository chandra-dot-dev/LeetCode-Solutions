class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> mpp;
        for(string s:arr){
            mpp[s]++;
        }
        for(auto it:arr){
            if(mpp[it] == 1){
               k--;
               if(k==0) return it;
            }
        }
        return "";
    }
};