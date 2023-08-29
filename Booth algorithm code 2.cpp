#include <stdio.h>
#include <math.h>

int a = 0, b = 0, c = 0, a1 = 0, b1 = 0;
int anum[5] = {0}, anumcp[5] = {0}, bnum[5] = {0};
int bcomp[5] = {0}, pro[5] = {0}, res[5] = {0};

void binary() {
    a1 = abs(a);
    b1 = abs(b);
    // Rest of the binary conversion code remains the same
    // ...

    // Code for two's complementing and handling negative inputs
    // ...

    // Adjustments for bcomp should be done as well
    // ...
}

void add(int num[]) {
    // Add operation implementation remains the same
    // ...
}

void arshift() {
    // Arithmetic shift implementation remains the same
    // ...
}

int main() {
    int i, q = 0;
    printf("\t\tBOOTH'S MULTIPLICATION ALGORITHM\n");
    printf("Enter two numbers to multiply:\n");
    printf("Both must be less than 16\n");

    do {
        printf("\nEnter A: ");
        scanf("%d", &a);
        printf("Enter B: ");
        scanf("%d", &b);
    } while (a >= 16 || b >= 16);

    printf("\nExpected product = %d", a * b);
    binary();
    // Rest of the code remains the same
    // ...

    return 0;
}

