# Sorting Algorithms & Big O

## Description

This project implements four sorting algorithms in C and documents their time complexity using Big O notation. Each algorithm sorts arrays or doubly linked lists of integers in ascending order.

## Team

| Member | Tasks | Focus |
|--------|-------|-------|
| Shahd | 2–3 | Selection sort, Quick sort |
| Sara | 0 | Bubble sort |
| Ahad | 1 | Insertion sort |

## Big O Notation

| Notation | Meaning |
|----------|---------|
| O(1) | Constant |
| O(n) | Linear |
| O(n^2) | Quadratic |
| O(log n) | Logarithmic |
| O(nlog(n)) | Log-linear |

## Data Structures

```c
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
```

## Files

| File | Description |
|------|-------------|
| `sort.h` | Header file with struct definition and all prototypes |
| `0-bubble_sort.c` | Bubble sort — repeatedly swaps adjacent elements |
| `0-O` | Big O for Bubble sort: O(n) / O(n^2) / O(n^2) |
| `1-insertion_sort_list.c` | Insertion sort — inserts each element in correct position |
| `1-O` | Big O for Insertion sort: O(n) / O(n^2) / O(n^2) |
| `2-selection_sort.c` | Selection sort — selects minimum and places at front |
| `2-O` | Big O for Selection sort: O(n^2) / O(n^2) / O(n^2) |
| `3-quick_sort.c` | Quick sort — Lomuto partition scheme, pivot is last element |
| `3-O` | Big O for Quick sort: O(nlog(n)) / O(nlog(n)) / O(n^2) |

## Algorithm Summary

| Algorithm | Best | Average | Worst | Stable |
|-----------|------|---------|-------|--------|
| Bubble Sort | O(n) | O(n^2) | O(n^2) | Yes |
| Insertion Sort | O(n) | O(n^2) | O(n^2) | Yes |
| Selection Sort | O(n^2) | O(n^2) | O(n^2) | No |
| Quick Sort | O(nlog(n)) | O(nlog(n)) | O(n^2) | No |

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <main_file.c> <sort_file.c> print_array.c -o output
```

Example:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 2-main.c 2-selection_sort.c print_array.c -o select
```

## Requirements

- OS: Ubuntu 20.04 LTS
- Compiler: gcc with `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Style: Betty (`betty-style.pl` and `betty-doc.pl`)
- No global variables
- Maximum 5 functions per file
- No standard library unless specified
- All prototypes in `sort.h`
- Header files must be include-guarded
- Lists/arrays with size < 2 do not need to be sorted

## Repository

- GitHub: [holbertonschool-sorting_algorithms](https://github.com/holbertonschool-sorting_algorithms)
