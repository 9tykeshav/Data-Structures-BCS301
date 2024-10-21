void matrixSubtraction(int m, int n, int mat1[m][n], int mat2[m][n], int res[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    printMatrix(m, n, res);
}
