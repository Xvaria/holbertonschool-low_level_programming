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
                if grid[i-1][j] == 0:
                    p += 1
                if grid[i+1][j] == 0:
                    p += 1
                if grid[i][j+1] == 0:
                    p += 1
                if grid[i][j-1] == 0:
                    p += 1
            else:
                if grid[i-1][j] == 1:
                    if grid[i+1][j] == 1:
                        if grid[i][j+1] == 1:
                            if grid[i][j-1] == 1:
                                p = 0
                                return p
            j += 1
        j = 0
        i += 1
    return p
