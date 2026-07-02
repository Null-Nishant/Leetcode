class Solution {
public:
    int maxDistance(string moves) {
        int x = 0, y = 0;
        int count=0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'U') {
                x += 1;
            } else if (moves[i] == 'D') {
                x -= 1;
            } else if (moves[i] == 'R') {
                y += 1;
            } else if (moves[i] == 'L') {
                y -= 1;
            } else {
                count++;
            }
        }
        return abs(x)+abs(y)+count;
    }
};