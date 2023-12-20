#!/usr/bin/python3
"""
This module contains a function to calculate the perimeter of an island represented in a grid.
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of an island represented in a grid.

    Parameters:
    grid (list): A 2D list where 1 represents land and 0 represents water.

    Returns:
    int: The perimeter of the island.
    """
    rows = len(grid)
    cols = len(grid[0])
    p = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if i > 0 and grid[i-1][j] == 0:
                    p += 1
                if j > 0 and grid[i][j-1] == 0:
                    p += 1
                if i < rows - 1 and grid[i+1][j] == 0:
                    p += 1
                if j < cols - 1 and grid[i][j+1] == 0:
                    p += 1
    return p
