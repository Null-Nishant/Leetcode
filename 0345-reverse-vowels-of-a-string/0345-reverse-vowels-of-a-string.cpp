class Solution {
public:
bool isVowel(char c){
    return c=='a'|| c=='u'|| c=='o'|| c=='i'|| c=='e'|| c=='A' || c=='E'|| c=='I'|| c=='O'|| c=='U';
}
    string reverseVowels(string s) {
        int low = 0, high = s.size() - 1;
        while (low < high) {
            while (low<high && !isVowel(s[low])) {
                low++;
            }
            while (low<high && !isVowel(s[high])) {
                high--;
            }
            swap(s[low],s[high]);
            low++,high--;
        }
        return s;
    }
};