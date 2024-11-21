# 42 PISCINE RELOADED (BARCELONA) - SEPTEMBER 2024

This project is a collection of exercises seen in the **piscine**, intended to reinforce the fundamentals of C programming. Each exercise will help you review key concepts such as functions, loops, pointers and structures and more.

## Exercises (C)

### Exercise 00: Oh yeah, mooore...

- **Turn-in directory**: `ex00/`
- **Files to turn in**: `exo.tar`
- **Allowed functions**: None

Create specific files and directories with predefined file permissions and output using `ls -l`. Then, use `tar` to package them.

---

### Exercise 01: Z

- **Turn-in directory**: `ex01/`
- **Files to turn in**: `z`
- **Allowed functions**: None

Create a file called `z` that returns the character "Z" followed by a newline when used with the `cat` command.

---

### Exercise 02: clean

- **Turn-in directory**: `ex02/`
- **Files to turn in**: `clean`
- **Allowed functions**: None

Write a command that searches for and deletes files ending with `~` or surrounded by `#` in the current directory and subdirectories.

---

### Exercise 03: find_sh

- **Turn-in directory**: `ex03/`
- **Files to turn in**: `find_sh.sh`
- **Allowed functions**: None

Write a script that searches for all filenames ending with `.sh` in the current directory and subdirectories, displaying the filenames without the `.sh` extension.

---

### Exercise 04: MAC

- **Turn-in directory**: `ex04/`
- **Files to turn in**: `MAC.sh`
- **Allowed functions**: None

Write a script that displays your machine's MAC address followed by a newline.

---

### Exercise 05: Can you create it?

- **Turn-in directory**: `ex05/`
- **Files to turn in**: `"\?$*'MaRViN'*$?"`
- **Allowed functions**: None

Create a file with the content "42" and nothing else. The filename must be exactly: `\?$*'MaRViN'*$?`.

---

### Exercise 06: ft_print_alphabet

- **Turn-in directory**: `ex06/`
- **Files to turn in**: `ft_print_alphabet.c`
- **Allowed functions**: `ft_putchar`

Create a function that prints the alphabet in lowercase, in ascending order, on a single line.

---

### Exercise 07: ft_print_numbers

- **Turn-in directory**: `ex07/`
- **Files to turn in**: `ft_print_numbers.c`
- **Allowed functions**: `ft_putchar`

Create a function that prints all digits (0-9) in ascending order on a single line.

---

### Exercise 08: ft_is_negative

- **Turn-in directory**: `ex08/`
- **Files to turn in**: `ft_is_negative.c`
- **Allowed functions**: `ft_putchar`

Create a function that displays 'N' if the number passed as a parameter is negative and 'P' if it is positive or zero.

---

### Exercise 09: ft_ft

- **Turn-in directory**: `ex09/`
- **Files to turn in**: `ft_ft.c`
- **Allowed functions**: None

Create a function that takes a pointer to an integer as a parameter and sets its value to 42.

---

### Exercise 10: ft_swap

- **Turn-in directory**: `ex10/`
- **Files to turn in**: `ft_swap.c`
- **Allowed functions**: None

Create a function that swaps the values of two integers passed by address.

---

### Exercise 11: ft_div_mod

- **Turn-in directory**: `ex11/`
- **Files to turn in**: `ft_div_mod.c`
- **Allowed functions**: None

Create a function that divides two integers and stores the quotient in one pointer and the remainder in another.

---

### Exercise 12: ft_iterative_factorial

- **Turn-in directory**: `ex12/`
- **Files to turn in**: `ft_iterative_factorial.c`
- **Allowed functions**: None

Create an iterative function that calculates and returns the factorial of the given number. Return 0 in case of an error.

---

### Exercise 13: ft_recursive_factorial

- **Turn-in directory**: `ex13/`
- **Files to turn in**: `ft_recursive_factorial.c`
- **Allowed functions**: None

Create a recursive function that calculates and returns the factorial of the given number. Return 0 in case of an error.

---

### Exercise 14: ft_sqrt

- **Turn-in directory**: `ex14/`
- **Files to turn in**: `ft_sqrt.c`
- **Allowed functions**: None

Create a function that returns the square root of a number if it has an integer square root, otherwise return 0.

---

### Exercise 15: ft_putstr

- **Turn-in directory**: `ex15/`
- **Files to turn in**: `ft_putstr.c`
- **Allowed functions**: `ft_putchar`

Create a function that prints a string to the standard output.

---

### Exercise 16: ft_strlen

- **Turn-in directory**: `ex16/`
- **Files to turn in**: `ft_strlen.c`
- **Allowed functions**: None

Recreate the behavior of the `strlen` function that returns the length of a string.

---

### Exercise 17: ft_strcmp

- **Turn-in directory**: `ex17/`
- **Files to turn in**: `ft_strcmp.c`
- **Allowed functions**: None

Recreate the behavior of the `strcmp` function that compares two strings lexicographically.

---

### Exercise 18: ft_print_params

- **Turn-in directory**: `ex18/`
- **Files to turn in**: `ft_print_params.c`
- **Allowed functions**: `ft_putchar`

Create a program that prints all the arguments passed to it.

---

### Exercise 19: ft_sort_params

- **Turn-in directory**: `ex19/`
- **Files to turn in**: `ft_sort_params.c`
- **Allowed functions**: `ft_putchar`

Create a program that prints all the arguments passed to it in ASCII-sorted order, except the first one (program name).

---

### Exercise 20: ft_strdup

- **Turn-in directory**: `ex20/`
- **Files to turn in**: `ft_strdup.c`
- **Allowed functions**: `malloc`

Recreate the behavior of the `strdup` function which duplicates a string using dynamic memory allocation.

---

### Exercise 21: ft_range

- **Turn-in directory**: `ex21/`
- **Files to turn in**: `ft_range.c`
- **Allowed functions**: `malloc`

Create a function that returns an array of integers ranging from `min` to `max` (excluding max). If `min` is greater than or equal to `max`, return `NULL`.

---

### Exercise 22: ft_abs.h

- **Turn-in directory**: `ex22/`
- **Files to turn in**: `ft_abs.h`
- **Allowed functions**: None

Create a macro `ABS` that computes the absolute value of its argument.

---

### Exercise 23: ft_point.h

- **Turn-in directory**: `ex23/`
- **Files to turn in**: `ft_point.h`
- **Allowed functions**: None

Create a header file `ft_point.h` containing the definition of a struct `t_point` with two integer members `x` and `y`.

---

### Exercise 24: Makefile

- **Turn-in directory**: `ex24/`
- **Files to turn in**: `Makefile`
- **Allowed functions**: None

Create a `Makefile` to compile the library `libft.a`. The `Makefile` should handle the rules: `all`, `clean`, `fclean`, and `re`.

---

### Exercise 25: ft_foreach

- **Turn-in directory**: `ex25/`
- **Files to turn in**: `ft_foreach.c`
- **Allowed functions**: None

Create a function `ft_foreach` that applies a function to each element of an integer array.

---

### Exercise 26: ft_count_if

- **Turn-in directory**: `ex26/`
- **Files to turn in**: `ft_count_if.c`
- **Allowed functions**: None

Create a function `ft_count_if` that returns the number of strings in the array that return 1 when passed to the function `f`.

---

### Exercise 27: display_file

- **Turn-in directory**: `ex27/`
- **Files to turn in**: `Makefile` and necessary program files
- **Allowed functions**: `open`, `read`, `write`, `close`

Create a program `ft_display_file` that displays the contents of a file passed as an argument. It must handle errors such as missing or too many arguments.

---

## MY SOLUTION (PISCINE RELOADED)

| Exercise   | Passed | Final mark |
| ---------- | ------ | ---------- |
| EX00       | ✅     |  100/100   |
| EX01       | ✅     |  100/100   |
| EX02       | ✅     |  100/100   |
| EX03       | ✅     |  100/100   |
| EX04       | ✅     |  100/100   |
| EX05       | ✅     |  100/100   |
| EX06       | ✅     |  100/100   |
| EX07       | ✅     |  100/100   |
| EX08       | ✅     |  100/100   |
| EX09       | ✅     |  100/100   |
| EX10       | ✅     |  100/100   |
| EX11       | ✅     |  100/100   |
| EX12       | ✅     |  100/100   |
| EX13       | ✅     |  100/100   |
| EX14       | ✅     |  100/100   |
| EX15       | ✅     |  100/100   |
| EX16       | ✅     |  100/100   |
| EX17       | ✅     |  100/100   |
| EX18       | ✅     |  100/100   |
| EX19       | ✅     |  100/100   |
| EX20       | ✅     |  100/100   |
| EX21       | ✅     |  100/100   |
| EX22       | ✅     |  100/100   |
| EX23       | ✅     |  100/100   |
| EX24       | ✅     |  100/100   |
| EX25       | ✅     |  100/100   |
| EX26       | ✅     |  100/100   |
| EX27       | ✅     |  100/100   |
