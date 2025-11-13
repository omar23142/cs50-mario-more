# 🧱 CS50 Mario Pyramid (C Version)

This project is one of the classic problems from Harvard's **CS50 Introduction to Computer Science** course — the **Mario Pyramid** 🎮  
It’s a simple but elegant exercise in **loops**, **conditions**, and **user input validation** written in **C**.

---

## 📝 Project Description

The goal of this program is to recreate a **double pyramid** similar to the ones seen in Nintendo's *Super Mario* games.

The user is prompted to enter a **height** between **1 and 8**, and the program then prints two side-by-side pyramids of that height using the `#` symbol.

Example output for height = 4:


---

## 🧠 Key Concepts Practiced

- Getting user input with `get_int()` from the CS50 library  
- Input validation with `do...while` loops  
- Nested `for` loops for building pyramid structure  
- Formatted console output using `printf()`  

---

## ⚙️ How It Works

1. The program asks the user for the height of the pyramid.
2. It validates the input to make sure it’s between 1 and 8.
3. It prints spaces and hashes `#` in the right order to form:
   - A **left pyramid**
   - Two **spaces** in the middle
   - A **right pyramid** mirroring the left

---

## 💻 How to Run

You can compile and run the program using the CS50 IDE or any C compiler:

```bash
clang -o mario mario.c -lcs50
./mario


$ ./mario
Height: 5
    #  #
   ##  ##
  ###  ###
 ####  ####
#####  #####
