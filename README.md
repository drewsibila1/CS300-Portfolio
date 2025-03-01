# CS300-Portfolio
Portfolio submission for CS 300 Module Eight Journal
# CS 300 Portfolio Submission

## Project Overview
This repo has my submission for the CS 300 Module Eight Journal. It includes my runtime analysis from Project One and the sorting and printing function from Project Two. Both of these projects focus on working with different data structures to make things more efficient.

---

## **Project One: Runtime Analysis**
In Project One, I looked at three different data structures—vector, hash table, and binary search tree—to see how they perform when loading, searching, and sorting course data. Here’s what I found:

- **Vector:**  
  - **Loading Data:** O(n)  
  - **Searching:** O(n)  
  - **Sorting:** O(n log n)  

- **Hash Table:**  
  - **Loading Data:** O(n)  
  - **Searching:** O(1) on average  
  - **Sorting:** O(n log n) (because it has to be converted into a list first)  

- **Binary Search Tree (BST):**  
  - **Loading Data:** O(n log n)  
  - **Searching:** O(log n)  
  - **Sorting:** O(n)  

### **Which One Worked Best?**  
The **hash table** ended up being the best choice because it allows for super fast lookups (O(1) on average). Since this program is mainly about finding courses quickly, the hash table made the most sense.

---

## **Project Two: Course Sorting and Display**
This part of the project was about loading course data, sorting it in alphanumeric order, and displaying course details.

The sorting function uses **std::sort()**, which runs in **O(n log n)** time. It’s efficient and gets the job done fast, even with a lot of courses.

---

## **Reflection Questions**
### **1. What problem was I solving in these projects?**  
The goal was to build a system for academic advisors so they could easily organize and look up course info, including prerequisites.

### **2. How did I approach the problem?**  
I tested different data structures to figure out which one would be the fastest and most efficient for searching and sorting courses.

### **3. How did I deal with any problems along the way?**  
I had some trouble reading the file correctly at first, but I fixed it by using `stringstream` to split the lines properly. Also, I ran into issues with sorting in the hash table since it doesn’t store things in order, so I had to convert it into a list first.

### **4. How did this project change the way I think about designing software?**  
It showed me how important data structures are. If I had picked the wrong one, the program would have been way slower. Now I think more about **efficiency** when writing code.

### **5. How did this project change the way I write code?**  
I learned to keep my code **clean and organized**, using separate functions for different tasks. This makes it way easier to read and update later.

---

## **Instructor Access**
Check out my work here:  
[GitHub Repository Link Here]
