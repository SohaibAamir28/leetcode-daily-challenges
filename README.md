# LeetCode Daily Challenges

This repository contains solutions to various LeetCode Daily Challenges. Solutions are provided in multiple programming languages, including C++, Python, Java, and others. Each solution is accompanied by a detailed explanation of the approach, time complexity analysis, and optimal strategies.

1. Grocery Discount Finding Calculator:
This Python script calculates a discount on grocery items based on the user's input for the item name, price, and quantity. It applies a fixed 10% discount and calculates the total price after the discount.

python

# Grocery Discount Finding Calculator
print("SMART SHOPPING CALCULATOR")
item = input("Give Names of Items: ")
price = float(input("Price: $"))
quantity = int(input("Quantity: "))
discount = 0.1  # 10% discount -> just change your store discount %

# Calculations
subtotal = price * quantity
discount = subtotal * discount
total = subtotal - discount

# Output
print(f"\nBuy Items: {quantity} {item}: ${subtotal}")
print(f"Discount: ${discount}")
print(f"TOTAL: ${total}")
How it works:

Takes the name, price, and quantity of items as input.

Applies a 10% discount to the total price.

Prints the subtotal, discount, and total after the discount.

2. Daily Fitness Check with Auto-Calorie Calculation:
This script calculates how many calories you have burned based on the number of steps you take. It also compares it with a goal (8,000 steps) to let you know whether you've reached your fitness goal.


# Daily Fitness Check with Auto-Calorie Calculation
print("DAILY FITNESS CHECK")
weight = float(input("Your weight (kg): "))
steps = int(input("Steps taken today: "))

# Constants
STEP_GOAL = 8000
CAL_PER_STEP = 0.04  # Average calories per step per kg

# Calculations
calories_burned = steps * CAL_PER_STEP * weight
calorie_goal = STEP_GOAL * CAL_PER_STEP * weight

# Output
print("\nFITNESS REPORT")
print(f"Steps: {steps}/{STEP_GOAL}")
print(f"Calories burned: {calories_burned}/{calorie_goal}")

# Progress evaluation
if steps >= STEP_GOAL:
    print("Great job! Hit your step goal!")
else:
    print(f"{STEP_GOAL - steps} steps needed to reach goal")

if calories_burned >= calorie_goal:
    print("Reached calorie burn target!")
else:
    print(f"{calorie_goal - calories_burned} calories needed")
How it works:

Takes the weight and number of steps as input.

Calculates calories burned based on the number of steps and weight.

Compares the steps taken with a goal of 8,000 steps.

Evaluates if the calorie burn goal has been achieved or if more steps/calories are needed.




## Repository Structure

Each problem has its own folder, which includes:
- The problem statement
- Solution codes in C++, Python, Java, and other languages
- A README file explaining the approach and complexity analysis
- Solved alot of easy, medium and hard problems. (90+)

**Languages Supported**:
- C++: `solution.cpp`
- Python: `solution.py`
- Java: `Solution.java`

## How to Run

### C++:
1. Compile the code:
   ```bash
   g++ -std=c++17 -o solution solution.cpp

### Python:
    
    python3 solution.py

### Java:

    javac Solution.java
    java Solution

### How to Contribute
Contributions are welcome! Feel free to fork the repository, open a pull request, and add solutions in your preferred language or improve existing solutions.

### License
This project is licensed under the MIT License.


### Topics:
- Algorithms
- Data Structures
- LeetCode Solutions
- Multi-language (#C++, #Python, #Java, etc.)
- Problem Solving

### Example Problem Folder Structure:

1. **Folder Name**: `2530-maximal-score-after-applying-k-operations/`
2. **Files Inside**:
   - `solution.cpp` (C++ solution)
   - `solution.py` (Python solution)
   - `Solution.java` (Java solution)
   - `README.md` (which explains the problem, solution approach, and time complexity)

### License:
MIT License (add the `LICENSE` file in the repository).

---

This setup ensures that your repository supports multiple languages while providing clear explanations and structure for each problem. It also opens up contributions for users familiar with different programming languages!

