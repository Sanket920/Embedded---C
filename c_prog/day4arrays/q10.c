/*Write a C program to sum two 2-D matrices*/



    #include < stdio.h >
    int main()
    {
        int m, n, c, d, first[3][3], second[3][3], sum[3][3];
        printf("Enter the number of rows and columns of matrix\n");
        scanf("%d%d", & m, & n);
        printf("Enter the elements of first matrix\n");
        for (c = 0; c < m; c++)
            for (d = 0; d < n; d++) scanf("%d", & first[c][d]);
        printf("Enter the elements of second matrix\n");
        for (c = 0; c < m; c++)
            for (d = 0; d < n; d++) scanf("%d", & second[c][d]);
        printf("Sum of entered matrices:-\n");
        for (c = 0; c < m; c++)
        {
            for (d = 0; d < n; d++)
            {
                sum[c][d] = first[c][d] + second[c][d];
                printf("%d\t", sum[c][d]);
            }
            printf("\n");
        }
        return 0;
    }
