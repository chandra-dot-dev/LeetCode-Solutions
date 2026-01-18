class Solution {
public:
    bool areNumbersAscending(string s) {
        istringstream a(s);
        int c = 0;
        string b;
        while (a >> b) {
            if (isdigit(b[0])) {
                int d = stoi(b);
                if (c >= d) {
                    return false;
                }
                c = d;
            }
        }
        return true;
    }
};