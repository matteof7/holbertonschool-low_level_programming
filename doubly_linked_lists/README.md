# Doubly Linked List Project in C

## Description

This project implements a doubly linked list in C. It uses a custom data structure `dlistint_t` to represent the nodes of the list.

## Technical Specifications

- **Environment**: Ubuntu 20.04 LTS
- **Compiler**: gcc, with the options -Wall -Werror -Wextra -pedantic -std=gnu89
- **Code Style**: Betty style
- **Allowed Editors**: vi, vim, emacs

## Data Structure

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;