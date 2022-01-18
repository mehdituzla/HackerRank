#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four (int a, int b, int c, int d) {
    int max;
    
    a = a > b ? a : b;
    c = c > d ? c : d;
    
    max = a > c ? a : c;
    
    return max;
}
