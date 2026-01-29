# SPACE COMPLEXITY

1. What is Space Complexity?

Space Complexity tells us:
→ How much EXTRA memory a program uses
→ As input size (n) increases

IMPORTANT:

- We count only EXTRA space (auxiliary space)
- Input space is usually ignored

---

2. What counts as EXTRA space?

✔ Variables
✔ Arrays, objects, data structures created by program
✔ Recursion stack

✖ Input array given to function (usually ignored)

---

3. Common Space Complexities

O(1) → Constant space
O(n) → Linear space
O(n²) → Quadratic space

---

4. Example 1: Constant Space — O(1)

Function:

- Uses a few variables
- No matter how big input is, memory stays same

Example idea:

- int sum
- int max

Space used:

- Fixed number of variables

Space Complexity = O(1)

---

5. Example 2: Linear Space — O(n)

Function:

- Creates an array of size n

Example idea:

- int temp[n]

If input doubles:

- Memory also doubles

Space Complexity = O(n)

---

6. Key Rule to Calculate Space Complexity

Step 1: Ignore input space
Step 2: Count extra variables / arrays / recursion
Step 3: Take the highest growing term
Step 4: Drop constants

---

7. Very Important

Time Complexity → How runtime grows  
Space Complexity → How memory usage grows

---

8. Quick Summary

Few variables only → O(1)
One array of size n → O(n)
2D array of size n × n → O(n²)
