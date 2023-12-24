//Question link- https://leetcode.com/problems/valid-palindrome/description/ 

class Solution {
    string cleanInput(string s) {
        string input;
        for(int i = 0; i < s.size(); i++) {
            cout << s[i] << " ";
            if(s[i] >= 'A' && s[i] <= 'Z') {
                input += (s[i] + 32);
            } else if(s[i] >= 'a' && s[i] <= 'z') {
                input += s[i];
            } else if(s[i] >= '0' && s[i] <= '9') {
                input += s[i];
            } else continue;
        }
        cout << "\n";
        return input;
    }
public:
    bool isPalindrome(string s) {
        s = cleanInput(s);
        cout << s << endl;
        int start = 0, end = s.size() - 1;
        while(start < end) {
            if(s[start] != s[end]) {
                return false;
            } else {
                start++;
                end--;
            }
        }
        return true;
    }
};