Time Complexity

It is the amount of time taken by an algorithm to run.
As a function of length of the input.

Why?
For making better programs.
Comparison of algo's.

Ways to Represent Time Complexity:

1. Big-O Notation (O)
   - Represents the upper bound (worst-case time complexity)
   - Most commonly used in interviews and analysis
     Example: O(1), O(n), O(n log n), O(n²)

2. Big-Omega Notation (Ω)
   - Represents the lower bound (best-case time complexity)
     Example: Ω(1), Ω(n)

3. Big-Theta Notation (Θ)
   - Represents the tight bound (average / exact growth rate)
     Example: Θ(n), Θ(n log n)

Summary:

- O(f(n)) → Worst Case
- Ω(f(n)) → Best Case
- Θ(f(n)) → Average / Tight Bound

Common Time Complexities

1. Constant Time — O(1)
   - Execution time does NOT depend on input size
   - Always takes the same amount of time
     Examples:
   - Accessing an array element by index
   - Simple arithmetic operations
   - If/else with constant operations

2. Logarithmic Time — O(log n)
   - Input size reduces by a factor (usually half) each step
   - Very efficient for large inputs
     Examples:
   - Binary Search
   - Searching in a balanced BST
   - Divide-and-conquer algorithms

3. Linear Time — O(n)
   - Execution time grows directly proportional to input size
   - One full traversal of data
     Examples:
   - Loop running n times
   - Finding max/min in an array
   - Linear search

4. Linearithmic Time — O(n log n)
   - Combination of linear and logarithmic
   - Common in efficient sorting algorithms
     Examples:
   - Merge Sort
   - Quick Sort (average case)
   - Heap Sort

5. Quadratic Time — O(n²)
   - Nested loops over the same data
   - Becomes slow for large inputs
     Examples:
   - Bubble Sort
   - Selection Sort
   - Comparing all pairs in an array

6. Cubic Time — O(n³)
   - Three nested loops
   - Rarely acceptable in real problems
     Examples:
   - Brute-force matrix multiplication
   - Some 3D DP problems

7. Exponential Time — O(2ⁿ)
   - Doubles with every additional input
   - Very inefficient
     Examples:
   - Recursive Fibonacci (without DP)
   - Generating all subsets

8. Factorial Time — O(n!)
   - Worst possible growth
   - Used in permutation-based problems
     Examples:
   - Generating all permutations
   - Traveling Salesman (brute force)

Important Order (Fast → Slow):
O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(n³) < O(2ⁿ) < O(n!)

Big-O notation tells the dominant growth pattern of runtime
in the worst case as input size increases.
