//find power(n) using for loop
#include <stdio.h>
int main() {
    int n, power, result = 1;
    printf("Enter the base number: ");
    scanf("%d", &n);
    printf("Enter the power value: ");
    scanf("%d", &power);
    for(int i = 0; i < power; i++) {
        result *= n;
    }
    printf("%d^%d = %d\n", n, power, result);
    return 0;
}

//find power(n) using while loop
#include <stdio.h>
int main() {
    int n, power, result = 1, i = 0;
    printf("Enter the base number: ");
    scanf("%d", &n);
    printf("Enter the power value: ");
    scanf("%d", &power);
    while (i < power) {
        result=result*n;
        i++;
    }
    printf("%d^%d = %d\n", n, power, result);
    return 0;
}
