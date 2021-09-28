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
