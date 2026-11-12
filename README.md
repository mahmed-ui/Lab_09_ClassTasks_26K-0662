# Lab_09 - C String Manipulation Lab Exercises

A collection of C programs demonstrating standard `<string.h>` library functions (`strlen`, `strstr`, `strcpy`, `strcat`, `strcmp`, and `strchr`) through practical real-world scenarios.

---

## Exercises Overview

### 1. Customer Feedback Analyzer
* **File:** `Question #1.c`
* **Objective:** Analyze customer review strings and sanitize negative keywords.
* **Key Functions Used:** `strlen()`, `strstr()`, `strcpy()`, `strcat()`
* **Functionality:**
  * Counts and displays the total number of characters in a feedback message.
  * Detects whether the keywords `"good"` or `"bad"` exist in the text.
  * Replaces occurrences of `"bad"` with `"not good"` and outputs the updated review.

### 2. Student Name Sorting System
* **File:** `Question #2.c`
* **Objective:** Alphabetically organize a list of student names for university administration.
* **Key Functions Used:** `strcmp()`, `strcpy()`
* **Functionality:**
  * Accepts 10 student names stored in a 2D character array (`char names[10][50]`).
  * Implements Bubble Sort using lexicographical comparison (`strcmp`) and string swapping (`strcpy`).
  * Prints the alphabetically sorted roster.

### 3. Email Domain Extractor
* **File:** `Question #3.c`
* **Objective:** Parse corporate email addresses to isolate organization domains.
* **Key Functions Used:** `strchr()`, `strcpy()`
* **Functionality:**
  * Takes an employee email address as input (e.g., `user@rehbartech.com`).
  * Locates the `@` delimiter using `strchr()`.
  * Extracts and prints the domain portion (e.g., `rehbartech.com`).

---

## 🛠️ Technologies Used
* **Language:** C (C99 / C11 standard)
* **Libraries:** `<stdio.h>`, `<string.h>`

---

## Author
Name: Mohammad Ahmed
Roll#: 26K-0662
Course: BS-CS
Section: 1D

---
