#!/usr/bin/python3
"""returns the perimeter of the island described in grid(int list of list)"""


def island_perimeter(grid):
    """_summary_

    Args:
        grid (_type_): _description_

    Returns:
        _type_: _description_
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0
    if width <= 100 and height <= 100:
        for i in range(height):
            for j in range(width):
                if grid[i][j] == 1:
                    size += 1
                    if (grid[i][j - 1] == 1):
                        edges += 1
                    if (grid[i - 1][j] == 1):
                        edges += 1
    return size * 4 - edges * 2
