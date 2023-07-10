#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: the 2 dimensional grid to free
 * @height: the height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	free(grid);
}
