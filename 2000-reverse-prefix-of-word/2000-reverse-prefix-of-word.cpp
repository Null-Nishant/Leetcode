class Solution {
public:
    string reversePrefix(string word, char ch) {
        if(word.find(ch)!=string::npos){
            int pos=word.find(ch);
            reverse(word.begin(),word.begin()+1+pos);
        }
        return word;
    }
};