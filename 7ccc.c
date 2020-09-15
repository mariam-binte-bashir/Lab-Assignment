#include <stdio.h>
int main()
 {
    int ro, col, a[100][100], a2[100][100], sum[100][100], i, j;
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &ro);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &col);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < ro; ++i)
        for (j = 0; j < col; ++j)
 {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < ro; ++i)
        for (j = 0; j < col; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a2[i][j]);
        }


    for (i = 0; i < ro; ++i)
        for (j = 0; j < col; ++j) {
            sum[i][j] = a[i][j] + a2[i][j];
        }


    printf("\nSum of two matrices: \n");
    for (i = 0; i < ro; ++i)
        for (j = 0; j < col; ++j)
 {
            printf("%d   ", sum[i][j]);
            if (j == co; - 1) {
                printf("\n\n");
}
}
return 0;
}
