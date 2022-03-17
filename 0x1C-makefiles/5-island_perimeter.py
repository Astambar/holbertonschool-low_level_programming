#!/usr/bin/python3
"""returns the perimeter of the island described in grid(int list of list)"""


def island_perimeter(grid):
    """Return the island perimeter"""
    width = len(grid[0])
    height = len(grid)
    edges = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                if 0 in [i, grid[i - 1][j]]:
                    edges += 1
                if 0 in [j, grid[i][j - 1]]:
                    edges += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    edges += 1
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    edges += 1
    return edges
