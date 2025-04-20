#include <stdio.h>
int main() {
    int i, j, k, x;

    printf("What is the Number\n");

    scanf("%d", &i);
    scanf("%d", &j);
    scanf("%d", &k);

    x = ((i + j) - k) / 4;  // Assuming you meant to add i and j, then subtract k, then divide by 4

    printf("The Number is %d\n", x);

    return 0;
}
