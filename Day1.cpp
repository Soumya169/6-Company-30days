Question 1:
Overlap Citcle and Rectangle:
class Solution {
public:
 int sqr(int x){
    return x*x;
 }
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int x=max(x1,min(xCenter,x2));
        int y=max(y1,min(yCenter,y2));

        if(sqr(x-xCenter)+sqr(y-yCenter) <=sqr(radius)){
            return true;
        }else{
            return false;
        }

        
    }
};


Question 2 :
Who is the Winner ?
  class Solution {
public:
    int findTheWinner(int n, int k) {
        int winner=0;
       for(int i=1;i<=n;i++){
        winner=(winner+k)%i;
       }
       return winner+1;
        
    }
};
