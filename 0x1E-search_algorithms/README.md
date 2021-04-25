# Hello Search Algorithms in C

Hi, in this project we use search algorithm, linear search, binary search and identify the best search algorithm to use depending on your needs.


# Files
- **0-linear.c**
- **1-binary.c**
- **2-O**
- **3-O**
- **4-O**
- **5-O**
- **6-O**

## 0-linear.c

Searches for a value in an array of integers using the Linear search algorithm

### Requirements:

-   Prototype : `int linear_search(int *array, size_t size, int value);`
-   Where `array` is a pointer to the first element of the array to search in.
-   `size` is the number of elements in `array`.
-   And `value` is the value to search for.
-   Your function must return the first index where `value` is located.
-   If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`.
-   Every time you compare a value in the array to the value you are searching, you have to print this value (see example below).

You will need the `0-main.c` file below to run this task or you can create your own main file.

```
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
```

The expected output for this task is:
```
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
```

## 1-binary.c

searches for a value in a sorted array of integers using the Binary search algorithm

### Requirements:

-   Prototype : `int binary_search(int *array, size_t size, int value);`
-   Where `array` is a pointer to the first element of the array to search in
-   `size` is the number of elements in `array`
-   And `value` is the value to search for
-   Your function must return the index where `value` is located
-   You can assume that `array` will be sorted in ascending order
-   You can assume that `value` wont appear more than once in `array`
-   If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
-   You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

You will need the `1-main.c` file below to run this task or you can create your own main file.

```
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
```

The expected output for this task is:
```
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
```

## 2-O

What is the `time complexity` (worst case) of a linear search in an array of size `n`?

## 3-O

What is the `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`?

## 4-O

What is the `time complexity` (worst case) of a binary search in an array of size `n`?

## 5-O

What is the `space complexity` (worst case) of a binary search in an array of size `n`?

## 6-O

What is the space complexity of this function / algorithm?

```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

## Building environment

These scripts were developed in:

-   Ubuntu 14.04
-   All files were tested in their compilation with `gcc 4.8.4` using the `-Wall` `-Werror` `-Wextra` and `-pedantic` flags.

## Authors
**Diego Fernando Ahumada Bocanegra** - [@XvariaDev](https://twitter.com/XvariaDev)

## Date-time
-   Holberton School
-   19/04/2021
-   Cohort #13