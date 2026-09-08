class Solution {
public:
    int countCommas(int n) {
        int length=(int)log10(n)+1;
        if(length<=3){
            return 0;
        }
        int count=0;
        for(int i=1000;i<=n;i++){
            int length=(int)log10(i)+1;
            if(length<7){
                count++;
            }
            else if(length>7){
                count+=2;
            }
        }
        return count;
    }
};