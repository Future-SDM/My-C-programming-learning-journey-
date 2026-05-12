# My-C-programming-learning-journey-
This repository documents my journey of learning C programming during my "dropper year" while preparing for college. Because I prioritize a "slow and steady" learning style, I focus on mastering logic on paper before moving to the IDE.
# My C Programming Learning Journey

This repository documents my journey of learning C programming during my "dropper year" as I prepare for college. I prioritize a "slow and steady" learning style, focusing on mastering logic on paper before moving to the IDE.

## 🧩 Challenges & Solutions

### 🧠 Logic Evolution
* **Continuous Execution:** My initial calculator design (v1) performed only one calculation and then exited. 
* **The Solution:** By revisiting fundamental loop concepts, I implemented a `while(1)` loop to allow for continuous use until the user chooses to exit.

### ⚠️ Syntax & Implementation Hurdles
* **Character Literals:** I initially faced issues using single quotes (`' '`) for operators. I learned that in C, single quotes are for `char` constants (like `'+'`), which is essential for `switch` cases.
* **Switch Case Defaults:** I encountered bugs where the program wouldn't handle invalid inputs properly. I added a `default:` case to the `switch` statement to handle unexpected operators safely.
* **Division by Zero:** I faced a specific issue where the division logic (`a / 0`) was not working or would cause the program to crash. I learned to implement an `if` check within the division case to prevent calculations when the divisor is zero.

## 📝 Documentation of Progress
I include my original handwritten logic notes in this repository to track how my thinking evolved from the "initial version" to the "finer version". This ensures that every line of code is backed by a solid understanding of the underlying logic.
