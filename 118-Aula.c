/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    *returnSize = numRows;
    int** result = (int**)malloc(numRows * sizeof(int));
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));
    int i;
    for(i = 0; i < numRows; i++){

    }

    return result;

}