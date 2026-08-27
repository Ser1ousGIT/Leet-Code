class Solution {
public:
    string reverseWords(string s) {
        vector<string> sr;
        string word;
        string answer;
        for(int i = 0; i<s.size(); i++){
            if(s[i]!=' '){
                word+=s[i];
                if(s[i+1] == ' ' || i == s.size() - 1){
                    sr.push_back(word);
                    word = "";
                }
            }
        }
        for(int i = sr.size() - 1; i>=0; i--){
            if(i == 0){
                answer+=sr[i];
            } else{
                answer+=sr[i]+" ";
            }
        }
        return answer;
    }
};