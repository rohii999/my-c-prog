    #include <stdio.h>

  //  void trace(int arr[][10], int m, int n);

    void main()

    {
        int array1[10][10];

        int i, j, m, n;

 

        printf("Enter the order of the matrix array1 and array2 \n");

        scanf("%d %d", &m, &n);

 

        printf("Enter the elements of matrix array1 \n");

        for (i = 0; i < m; i++) 

        {

            for (j = 0; j < n; j++)

            {

                scanf("%d", &array1[i][j]);

            }

        }

 

        printf("MATRIX array1 is \n");

        for (i = 0; i < m; i++) 

        {

            for (j = 0; j < n; j++) 

            {

                printf("%3d", array1[i][j]);

            }

            printf("\n");

        }
    }