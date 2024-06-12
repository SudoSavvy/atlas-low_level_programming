#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: Pointer to the 2D grid to be freed.
 * @height: The height (number of rows) of the grid.
 *
 * Description: This function frees the memory allocated for a 2D grid
 *              created by alloc_grid. It first frees each row of the grid,
 *              then frees the grid itself (array of pointers).
 */
void free_grid(int **grid, int height)
{
    if (grid == NULL)
        return;

    /** Free each row of the grid */
    for (int i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    /** Free the grid itself (array of pointers) */
    free(grid);
}
