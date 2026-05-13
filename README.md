# DSA Assignment - May 12th

This repository contains three C++ programs demonstrating fundamental Data Structures and Algorithms (DSA) concepts: **Linear Search** and **Bubble Sort**.

## 1. Suggested File Names

| Program | Description | Suggested Filename |
| :--- | :--- | :--- |
| **Program 1** | Linear Search for family members by name | `FamilySearch.cpp` |
| **Program 2** | Bubble Sort for a list of names | `NameSorter.cpp` |
| **Program 3** | Bubble Sort for a list of numbers | `NumberSorter.cpp` |

---

## 2. Logical Breakdown of the Programs

### Program 1: Linear Search (Family Members)
The logic here is a straightforward **"check everything"** approach.

*   **Storage:** It uses a `struct` to group a `name` and an `age` together, storing them in a list (`std::vector`).
*   **The Loop:** The program starts at the first name and compares it to the "search key" you entered.
*   **The Match:** If the names match, it grabs the age from that same spot and prints it.
*   **Efficiency:** This is **O(n)** complexity because in the worst-case scenario (if the name is at the very end or not there at all), you have to check every single person in the list.

### Programs 2 & 3: Bubble Sort (Names and Numbers)
Bubble sort is called "bubble" because the largest values gradually **"bubble up"** to the end of the list.

*   **Nested Loops:** It uses two loops. The outer loop keeps track of how many times we need to pass through the list, while the inner loop does the actual comparing.
*   **Comparison:** It looks at two neighbors (e.g., `names[j]` and `names[j+1]`).
*   **The Swap:** If the first one is "greater" than the second (alphabetically or numerically), they switch places.
*   **Sorting Strings:** In C++, you can compare strings like `names[j] > names[j+1]` directly. C++ checks the ASCII values, so "Zuck" is considered greater than "Anne" and will be pushed toward the end.
*   **Complexity:** Because of the nested loops, the complexity is **O(n²)**.

---

> [!TIP]
> Since these are being marked first thing tomorrow morning, you might want to practice explaining the **"Swap"** logic—it's the part instructors usually ask about during individual PC checks!
