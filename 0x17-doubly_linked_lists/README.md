
# C - Doubly linked lists


##  Requirements
*   Allowed editors: `vi`, `vim`, `emacs`.
*   All your files were compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
*   The code uses the `Betty` style. It was checked using `betty-style.pl` and `betty-doc.pl`.
*   All files end with a new line.
*   You are not allowed to use global variables.
*   No more than 5 functions per file.
*   The only C standard library functions allowed are `malloc`, `free`, `printf` and `exit`.
*   The `main.c` files are used to test your functions, but you don’t have to push them to your repo.
*   The prototypes of all your functions should be included in your header file called `lists.h`.
*   All your header files should be include guarded.

##  Prototype Data Structure 
```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

