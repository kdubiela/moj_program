#include <stdio.h>

void interleaveArrays(int* A, int n, int* B, int m, int* C)
{
    int *pa = A, *pb = B, *pc = C;
    int i = 0, j = 0;

    while (i < n && j < m) {
        *pc++ = *pa++;
        *pc++ = *pb++;
        i++;
        j++;
    }

    while (i < n) {
        *pc++ = *pa++;
        i++;
    }

    while (j < m) {
        *pc++ = *pb++;
        j++;
    }
}

int main(void)
{
    int n, m;

    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &m);
    int B[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    int C[n + m];

    interleaveArrays(A, n, B, m, C);

    for (int i = 0; i < n + m; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
