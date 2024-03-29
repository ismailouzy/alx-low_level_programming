#!/usr/bin/python3
"""
Grid perimeter
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the grid

    Args:
    grid (list)
    """
    perim = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:  # Check if the cell is land
                perim += 4

                if j > 0 and grid[i][j - 1] == 1:
                    perim -= 2
                if i > 0 and grid[i - 1][j] == 1:
                    perim -= 2

    return perim
