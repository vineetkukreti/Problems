Problem
Alice is playing Air Hockey with Bob. The first person to earn seven points wins the match. Currently, Alice's score is AA and Bob's score is BB.

Charlie is eagerly waiting for his turn. Help Charlie by calculating the minimum number of points that will be further scored in the match before it ends.

Input Format
The first line of input will contain an integer TT — the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains two space-separated integers AA and BB, as described in the problem statement.
Output Format
For each test case, output on a new line the minimum number of points that will be further scored in the match before it ends.

Constraints
1 \leq T \leq 501≤T≤50
0 \leq A, B \leq 60≤A,B≤6
Sample 1:
Input
Output
4
0 0
2 5
5 2
4 3
7
2
2
3
Explanation:
Test case 11: The current score is 0-00−0. If either Alice or Bob scores 77 consecutive points, then the score will become 7-07−0 or 0-70−7 respectively, and the game will end. It can be proven that at least 77 points will be further scored in the match before it ends.

Test case 22: The current score is 2-52−5. If Bob scores 22 consecutive points, then the score will become 2-72−7 and the game will end. It can be proven that at least 22 points will be further scored in the match before it ends.

Test case 33: The current score is 5-25−2. If Alice scores 22 consecutive points, then the score will become 7-27−2 and the game will end. It can be proven that at least 22 points will be further scored in the match before it ends.

Test case 44: The current score is 4-34−3. If Alice scores 33 consecutive points, then the score will become 7-37−3 and the game will end. It can be proven that at least 33 points will be further scored in the match before it ends.

Solution:
#include <iostream>
using namespace std;
int main()
{
   int ts;
   cin>>ts;
   while(ts--){
   int A,B;
   cin>>A>>B;
   int min1 = max(A,B);
   cout<<7-min1<<endl;
 }
	return 0;
}

