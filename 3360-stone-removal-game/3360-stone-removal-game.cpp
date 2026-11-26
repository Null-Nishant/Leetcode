class Solution {
public:
    bool canAliceWin(int n) {
        int balls=10;
        bool isAliceWin=false;
        while(n>=balls){
            n-=balls;
            balls--;
            isAliceWin=!isAliceWin;
            
        }
        return isAliceWin;
    }
};





