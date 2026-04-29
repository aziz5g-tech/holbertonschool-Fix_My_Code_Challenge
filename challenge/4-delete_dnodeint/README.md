# Double Linked List - Delete Node at Index

This directory contains a C implementation of a doubly linked list with the ability to delete nodes at specific indices.

## Files

- `lists.h` - Header file with structure and function declarations
- `add_dnodeint_end.c` - Function to add a node at the end of the list
- `free_dlistint.c` - Function to free the entire list
- `print_dlistint.c` - Function to print all elements in the list
- `delete_dnodeint_at_index.c` - Function to delete a node at a specific index
- `main.c` - Test program

## Compilation

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c free_dlistint.c print_dlistint.c add_dnodeint_end.c delete_dnodeint_at_index.c -o delete_dnodeint
```

## Execution

```bash
./delete_dnodeint
```

## Bug Fixed

The original `delete_dnodeint_at_index` function had incorrect logic that failed to properly delete nodes and update the linked list pointers.
