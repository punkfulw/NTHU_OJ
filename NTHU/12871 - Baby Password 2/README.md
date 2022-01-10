# [12871 - Baby Password 2 (Easy)](https://acm.cs.nthu.edu.tw/problem/12871/)


## Solution 1.


```c
// OJ: https://acm.cs.nthu.edu.tw/problem/12871/
// Author: github.com/punkfulw
// Time: O(1)
// Space: O(1)

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main(){
	char c;
    int shift;
    scanf("%c%d", &c, &shift);
    if (isupper(c))
        c = ((c - 'A') - shift + 26) % 26 + 'A';
    else 
        c = ((c - 'a') - shift + 26) % 26 + 'a';
    c ^= 32;
    printf("%c\n", c);
    return 0;
}

```
