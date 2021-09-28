# [13251 - Deeper learning (Easy)](https://acm.cs.nthu.edu.tw/problem/13251/)

<p>In Minecraft, players can use different kinds of blocks to create various buildings.</p>

<img alt="" src="https://acm.cs.nthu.edu.tw/media/uploads/2021/09/09/3yvzfehkbynthbgwajiad47v_lq8R9Tr.png">

<p>Given 3 integers, A, B, and C, you are asked to answer 2 individual questions about a given valley:</p>

<il>
  <li>A means the target height of the valley, B means the number of blocks in the current valley, and C means the length of each block. How many blocks should we mine to reach the target height A? Note that A is guaranteed to be the multiple of C.</li>
  <li>A means the length of the valley, B means the width of the valley, and C means the height of the valley. What is the volume V of the valley. Note that different from the question 1, the unit of A, B, C, and V in this question is block.</li>
</il>

<p></p>
<p>
<strong>Input:
A, B, C separated by a whitesapce.

(1 <= A, B, C <=1000)
</p>

<p>
<strong>Output:
The answer of the 2 questions separated by a whitespace.

Note that you need to print '\n' at the end of the output.
</p>


<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> 100 15 4
<strong>Output:</strong> 10 6000
</pre>



## Solution 1.


```c
// OJ: https://acm.cs.nthu.edu.tw/problem/13251/
// Author: github.com/punkfulw
// Time: O(1)
// Space: O(1)

#include<stdio.h>

int main(){
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    printf("%d %d\n", (A-(B * C)) / C, A * B* C);

    return 0;
}
```
