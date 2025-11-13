#include <stdio.h>
int main() {
    int a = 15, b = 20;
    if (a > b)
        printf("%d jest większe od %d\n", a, b);
    else if (a < b)
        printf("%d jest większe od %d\n", b, a);
    else
        printf("Liczby są równe\n");
}
