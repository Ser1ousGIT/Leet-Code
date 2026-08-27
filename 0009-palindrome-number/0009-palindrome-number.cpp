class Solution {
public:
    bool isPalindrome(int x) {
        string n = to_string(x);
        string rev = n;
        reverse(rev.begin(), rev.end());
        if(n == rev){
            return true;
        }
        else{
            return false;
        }
    }
};