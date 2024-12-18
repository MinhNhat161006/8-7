#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n], sum = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }

    printf("\nTổng: %d\n", sum);
    return 0;
}
