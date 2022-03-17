#!/usr/bin/python3
"""
Technical interview preparation.
"""


def island_perimeter(grid):
    """
    Function: Perimeter of the island
    * 0 represents a water zone
    * 1 represents a land zone
    * One cell is a square with side length 1
    * Grid cells are connected horizontally/vertically (not diagonally).
    * Grid is rectangular, width and height don't exceed 100.

    Args:
        grid(list): List of list of integers
    Returns:
        Returns the perimeter of the island described in grid.
    """
    land = 1
    water = 0
    rows = len(grid)
    result = 0
    for x in range(0, rows):
        for y in range(0, len(grid[x])):
            if grid[x][y] == land:
                if (y + 1) == len(grid[x]) or grid[x][y + 1] == water:
                    result += 1
                if (y - 1) == -1 or grid[x][y - 1] == water:
                    result += 1
                if (x + 1) == rows or grid[x + 1][y] == water:
                    result += 1
                if (x - 1) == -1 or grid[x - 1][y] == water:
                    result += 1
    return result
