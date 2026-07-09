// Last updated: 9/7/2026, 9:20:32 am
1/** 
2 * Forward declaration of guess API.
3 * @param  num   your guess
4 * @return 	     -1 if num is higher than the picked number
5 *			      1 if num is lower than the picked number
6 *               otherwise return 0
7 * int guess(int num);
8 */
9
10class Solution {
11public:
12    int guessNumber(int n) {
13        int left=1;
14        int right=n;
15        while(left<=right){
16            int mid=left+(right-left)/2;
17            if(guess(mid)==0){
18                return mid;
19            }
20            else if(guess(mid)==1)
21                left=mid+1;
22            else
23                right=mid-1;
24        }
25        return 0;
26    }
27};