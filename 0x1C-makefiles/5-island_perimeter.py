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
    * Grid is rectangular, width and height don’t exceed 100.

    Args:
        grid(list): List of list of integers
    Returns:
        Returns the perimeter of the island described in grid.
    """
    land = 1
    perimeter = 4
    rows = len(grid)
    result = 0
    for x in range(1, rows - 1):
        for y in range(1, len(grid[x]) - 1):
            if grid[x][y] == land:
                result += perimeter
                if grid[x][y + 1] == land:
                    result -= 1
                if grid[x][y - 1] == land:
                    result -= 1
                if grid[x + 1][y] == land:
                    result -= 1
                if grid[x - 1][y] == land:
                    result -= 1
    return result
