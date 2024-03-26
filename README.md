# Push_Swap

<img src="png/push_swap.png" alt="push_swap Logo" width="100" height="100">

Welcome, fellow coders and curious minds! 🌟 I'm thrilled to share with you my journey through the `push_swap` project at 42 Berlin, a challenge that not only tests our grit but also deepens our understanding of sorting algorithms, data structures, and the beauty of optimized problem-solving in C.

---

## About

`push_swap` is not just a project; it's a brain-teasing puzzle that pushes us to think beyond conventional sorting methods. By manipulating stacks with a limited set of instructions, I ventured into the world of algorithmic design to sort data in the least number of moves possible. This adventure was not only about coding but also about embracing the complexity of algorithms and the strategies behind efficient data manipulation.

---

## Project Insights

- **Program name:** push_swap
- **Files submitted:** Makefile, *.h, *.c
- **Makefile commands:** NAME, all, clean, fclean, re
- **External functions:** read, write, malloc, free, exit, plus any `libft` functions I've crafted
- **Authorized library:** Libft

---

## Core Mechanics

In the realm of `push_swap`, two stacks and a series of operations become the tools to conquer the chaos of unsorted integers. Through my implementation, I've embraced the following commands to elegantly sort the data, ensuring that each move is a step towards efficiency:

- **sa, sb, ss:** Swap the first two elements of stack a, b, or both.
- **pa, pb:** Push the top element from one stack to another.
- **ra, rb, rr:** Rotate the stacks upwards.
- **rra, rrb, rrr:** Rotate the stacks downwards.

Each operation is a brushstroke in the art of sorting, painting a path from disarray to order.

---

## Performance Showcase

Ever curious about how well my algorithm performs? Here's a glimpse into the efficiency of my sorting strategy, measured in the minimal number of instructions for varying input sizes. Witness the optimization in action:

| Input Size | Instructions |
|------------|--------------|
| 5          | 9            |
| 20         | 133          |
| 100        | 913          |
| 500        | 5765         |
| 1000       | 12780        |
| 10000      | 179148       |

---

## Embarking on the Journey

Ready to dive into the world of `push_swap`? Here's how to get started:

1. Clone this repository to begin your adventure.
2. Enter the project's domain by navigating into its directory.
3. Unleash the power of `push_swap` by compiling with `make`.
4. Challenge the program with a set of integers and watch as it unveils the path to order.
5. Marvel at the efficiency and elegance of the sorting process, benchmarked by the number of moves.

Embark on this journey with me, and let's explore the fascinating world of algorithms and optimization together. Through push_swap, we not only learn to sort but also to think differently about problem-solving and efficiency. 🚀

Example usage:
```bash
./push_swap 2 1 3 6 5 8
