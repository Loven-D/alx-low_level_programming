#!/usr/bin/python3

#function that returns the perimeter of the island described in grid


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    
    :param grid: A list of list of integers representing the island.
    :return: The perimeter of the island.
    """
    if not grid:
        return (0)

    perimeter = 0
    rows, cols = len(grid), len(grid[0])
    
    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4  # Start with 4 sides
                
                # Check left neighbor
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # Subtract 2 for shared edge
                
                # Check top neighbor
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Subtract 2 for shared edge
    
    return perimeter
