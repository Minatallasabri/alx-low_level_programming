#!/usr/bin/python3
"""island_perimeter"""


def island_perimeter(grid):
    """island perimeter Function"""
    land = 0
    n_rows = len(grid)  # Number of rows
    n_cols = len(grid[0])  # Number of columns

    for row in range(n_rows-1):
        for cul in range(n_cols-1):
            if grid[row][cul] == 1:
                if grid[row][cul - 1] == 0:
                    land += 1
                if grid[row][cul + 1] == 0:
                    land += 1
                if grid[row - 1][cul] == 0:
                    land += 1
                if grid[row + 1][cul] == 0:
                    land += 1
    return land