#!/usr/bin/python3
'Island Perimeter'


def island_perimeter(grid):
    'returns the perimeter of the island described in grid'
    i = 0
    j = 0
    p = 0
    while i < len(grid):
        while j < len(grid[i]):
            if grid[i][j] == 1:
                if i == 0 or grid[i-1][j] == 0:
                    p += 1
                if i == (len(grid) - 1) or grid[i+1][j] == 0:
                    p += 1
                if j == (len(grid) - 1) or grid[i][j+1] == 0:
                    p += 1
                if j == 0 or grid[i][j-1] == 0:
                    p += 1
            j += 1
        j = 0
        i += 1
    return p
