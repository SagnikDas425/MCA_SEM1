#include <stdio.h>
int main(){
    int n,d,temp;
    
    // Asking for input
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Finding last digit of a number
    d = n % 10;
    
    // Finding first digit of a number
    int m=n;
    while (m >= 10){
        m = m / 10;
    }
    temp = d;
    d = m;
    m = temp;
    // Displaying output
    printf("First digit of the number = %d \n", m);
    printf("Last digit of the number = %d", d);
    printf("Number = %d",n);
    return 0;
}
