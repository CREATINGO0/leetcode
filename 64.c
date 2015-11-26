#include <stdio.h>

int minPathSum(int** grid, int gridRowSize, int gridColSize) {
    int i, res = 0;
    int tmp1, tmp2;

    if (1 == gridRowSize) {
        for (i = 0; i < gridColSize; ++i) res += grid[0][i];
        return res;
    } else if (1 == gridColSize) {
        for (i = 0; i < gridRowSize; ++i) res += grid[i][0];
        return res;
    } else {
        tmp1 = minPathSum(grid, gridRowSize, gridColSize - 1);
        tmp2 = minPathSum(grid, gridRowSize - 1, gridColSize);
        res = tmp1 < tmp2 ? tmp1 : tmp2;
        return res + grid[gridRowSize - 1][gridColSize - 1];
    }
}

int main()
{
    return 0;
}
