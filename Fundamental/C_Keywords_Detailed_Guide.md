# 📘 C Programming Keywords – Detailed Guide

C has **32 reserved keywords**, each with a special meaning in the language. These cannot be used as identifiers (variable names, function names, etc.).

---

## 🔠 Data Types

| Keyword  | Description                                                                                        |
| -------- | -------------------------------------------------------------------------------------------------- |
| `int`    | Declares a variable for storing integer values (e.g., 1, 2, -5).                                   |
| `float`  | Declares a variable to store single-precision floating-point numbers.                              |
| `double` | Declares a variable to store double-precision floating-point numbers (more accurate than `float`). |
| `char`   | Declares a variable to store a single character (e.g., 'a', '1').                                  |
| `void`   | Specifies that a function does not return a value or takes no parameters.                          |

---

## 📦 Storage Class Specifiers

| Keyword    | Description                                                                                                      |
| ---------- | ---------------------------------------------------------------------------------------------------------------- |
| `auto`     | Default storage class for local variables; automatic duration.                                                   |
| `static`   | Retains a variable’s value between function calls; limits scope to file/block.                                   |
| `extern`   | Declares a global variable or function defined in another file.                                                  |
| `register` | Requests that a variable be stored in a CPU register (faster access).                                            |
| `volatile` | Prevents compiler optimizations; tells the compiler the variable may change unexpectedly (useful with hardware). |

---

## 🔁 Control Flow

| Keyword    | Description                                                                      |
| ---------- | -------------------------------------------------------------------------------- |
| `if`       | Executes a block if the condition is true.                                       |
| `else`     | Executes a block if the `if` condition is false.                                 |
| `switch`   | Selects one of many code blocks to be executed.                                  |
| `case`     | Defines individual branches in a `switch` block.                                 |
| `default`  | Specifies the default block in a `switch` if no `case` matches.                  |
| `while`    | Loops a block while a condition is true.                                         |
| `do`       | Executes a block at least once, then repeats while the condition is true.        |
| `for`      | Runs a loop with initialization, condition, and increment/decrement in one line. |
| `break`    | Exits from loops or `switch` blocks immediately.                                 |
| `continue` | Skips the rest of the loop body and starts the next iteration.                   |
| `goto`     | Jumps to a labeled statement within the same function (use with caution).        |
| `return`   | Exits from a function and optionally returns a value.                            |

---

## 🏗️ User-defined Types

| Keyword   | Description                                                    |
| --------- | -------------------------------------------------------------- |
| `struct`  | Groups different variables under one name (structure).         |
| `union`   | Groups variables sharing the same memory (only one at a time). |
| `enum`    | Defines a set of named integer constants (enumeration).        |
| `typedef` | Creates a new name (alias) for a data type.                    |

---

## 🔏 Type Qualifiers

| Keyword    | Description                                                          |
| ---------- | -------------------------------------------------------------------- |
| `const`    | Declares a variable as constant (read-only).                         |
| `signed`   | Declares a variable that can hold both positive and negative values. |
| `unsigned` | Declares a variable that can hold only non-negative values.          |
| `short`    | Declares a short-sized integer (uses less memory).                   |
| `long`     | Declares a long-sized integer (uses more memory).                    |

---

## 📐 Miscellaneous

| Keyword  | Description                                             |
| -------- | ------------------------------------------------------- |
| `sizeof` | Returns the size (in bytes) of a data type or variable. |

---

## ✅ Summary Table

| Category               | Keywords                                                                                               |
| ---------------------- | ------------------------------------------------------------------------------------------------------ |
| **Data Types**         | `int`, `float`, `double`, `char`, `void`                                                               |
| **Storage Classes**    | `auto`, `static`, `extern`, `register`, `volatile`                                                     |
| **Control Flow**       | `if`, `else`, `switch`, `case`, `default`, `while`, `do`, `for`, `break`, `continue`, `goto`, `return` |
| **User-defined Types** | `struct`, `union`, `enum`, `typedef`                                                                   |
| **Type Qualifiers**    | `const`, `signed`, `unsigned`, `short`, `long`                                                         |
| **Miscellaneous**      | `sizeof`                                                                                               |
