/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int rows = *matrixColSize;
    int cols = matrixSize;

    int** transposed = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        transposed[i] = (int*)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < *matrixColSize; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    *returnSize = rows;
    *returnColumnSizes = (int*)malloc(rows * sizeof(int));
    for (int i = 0; i < rows; i++) {
        (*returnColumnSizes)[i] = cols;
    }

    return transposed;
}