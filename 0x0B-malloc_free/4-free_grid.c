#include "main.h"
#include <stdlib.h>

/**
* free_grid - removing memory alloc
* @grid: grid
* @height: height
* Return: nothing
*/
void free_grid(int **grid, int height)
{
	int lp4;

	for (lp4 = 0; lp4 < height; lp4++)
		free(grid[lp4]);
	free(grid);
}
