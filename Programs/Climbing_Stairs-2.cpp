class Solution {
public:
    int climbStairs(int n) {
    int steps[n+1];
     if(n<=0){
     return 0;
       }
 else if (n <= 1) {
  return 1;
 }
 else{
  steps[0] = 1;
  steps[1] = 1;
  for (int i = 2; i <= n; i++) {
   steps[i] = steps[i - 2] + steps[i - 1];
  }
 }
 return steps[n];
}
};
