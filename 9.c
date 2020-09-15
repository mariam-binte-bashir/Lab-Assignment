#include <stdio.h>
int main() {
    int m[10][10], trans[10][10], ro, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &ro, &c);

    printf("\nEnter matrix elements:\n");
    for (i = 0; i < ro; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }

    printf("\nEntered matrix: \n");
    for (i = 0; i < ro; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d  ", m[i][j]);
            if (j == c - 1)
                printf("\n");
        }


    for (i = 0; i < ro; ++i)
        for (j = 0; j < c; ++j) {
            trans[j][i] = m[i][j];
        }


    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < ro; ++j) {
            printf("%d  ", trans[i][j]);
            if (j == ro - 1)
                printf("\n");
        }
    return 0;
}
