#include <stdio.h>
#include <math.h>
int isArmstrong(int n) {
    int m, d, s = 0, c = 0;
    m = n;
    while (m != 0) {
        m /= 10;
        c++;
    }
    m = n;
    while (m != 0) {
        d = m % 10;
        s += pow(d, c);
        m /= 10;
    }
    if (s == n)
        return 1; 
    else
        return 0;
}
int main() {
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Armstrong numbers between 1 and %d are:\n", n);
    for (i = 1; i <= n; i++) {
        if (isArmstrong(i))
            printf("%d\n", i);
    }
    return 0;
}
