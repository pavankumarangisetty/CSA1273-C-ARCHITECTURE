#include <stdio.h>
int main() {
    int dividend, divisor, quotient = 0, negative = 0;  
    printf("Enter dividend: ");
    scanf("%d", &dividend); 
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    if (dividend < 0) {
        dividend = -dividend;
        negative = !negative;
    }
    if (divisor < 0) {
        divisor = -divisor;
        negative = !negative;
    }
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }
    if (negative) {
        quotient = -quotient;
    }   
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", dividend);
    return 0;
}

