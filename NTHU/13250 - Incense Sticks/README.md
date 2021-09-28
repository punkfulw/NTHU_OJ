# [13250 - Incense Sticks (Easy)](https://acm.cs.nthu.edu.tw/problem/13250/)

<p>Taiwanese people burn incense sticks at Chungyuan Pu Tu.</p>

<img alt="" src="https://acm.cs.nthu.edu.tw/media/uploads/2021/09/11/1523273812-877ab2e8f4516644cf107638af41b9b7.jpg">

<p>However, due to COVID-19, we may need to burn incense sticks on the internet.

This is how we do it:</p>

<pre>
 \|/ \|/ \|/ 

("_____")

( ^  ^) ( ^  ^)
</pre>

<p>The incense sticks consist of three lines :</p>

<p>
The first line includes four whitespaces and three pairs of (\|/).

The second line includes a pair of brackets(()), a pair of quotation marks ("), and 5 underscores (_).

The third line includes 4 whitespaces, two pairs of  brackets(()), and two pairs of carets(^).

Remember to put a new line character in the end of each line.
</p>
<img alt="" src="https://acm.cs.nthu.edu.tw/media/uploads/2021/09/11/2021-09-11-55617.png">
<p>(gray dots represent whitespace characters)

Very Important Notes</p>


<ul>
  <li>Getting compile error? Having problem printing quotation mark (")? Maybe this link can help you.</li>
  <li>Getting Wrong Answer? Make sure you don't miss any whitespace ( ) or new line (\n) character.</li>
</ul>


<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> 
<strong>Output:</strong> 
 \|/ \|/ \|/ 
("_____")
( ^ ^)( ^ ^)
</pre>



## Solution 1.


```c
// OJ: https://acm.cs.nthu.edu.tw/problem/13250/
// Author: github.com/punkfulw
// Time: O(1)
// Space: O(1)

#include<stdio.h>

int main(){
    printf(" \\|/ \\|/ \\|/ \n");
    printf("(\"_____\")\n");
    printf("( ^ ^)( ^ ^)\n");

    return 0;
}
```
