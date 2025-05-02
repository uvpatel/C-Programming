# 🧮 C Data Types – Complete Guide

In C programming, a **data type** defines the **kind of data** a variable can store, such as numbers, characters, or complex structures. It also determines **how much memory** is allocated and **how the data is interpreted** by the compiler.

---

## 📌 Why Are Data Types Important?

- Tell the compiler **how to handle the data**.
- **Memory allocation** is based on data type.
- Ensure **type safety** during operations and assignments.

---

## 🧱 Categories of Data Types in C

C provides a variety of data types grouped into three main categories:

---

### 1. 🔢 Basic Data Types

These are the most commonly used fundamental types:

| Data Type | Description                                | Example      |
|-----------|--------------------------------------------|--------------|
| `int`     | Stores integers (whole numbers)            | `int age = 21;` |
| `char`    | Stores a single character                  | `char grade = 'A';` |
| `float`   | Stores single-precision floating-point numbers | `float pi = 3.14;` |
| `double`  | Stores double-precision floating-point numbers | `double d = 3.14159;` |

---

### 2. 🧬 Derived Data Types

Derived from basic types, used for more complex structures:

| Data Type   | Description                                   | Example               |
|-------------|-----------------------------------------------|-----------------------|
| Array       | Collection of elements of same type           | `int marks[5];`       |
| Pointer     | Stores address of another variable            | `int *ptr = &x;`      |
| Function    | Function declarations returning a type        | `int sum(int, int);`  |

---

### 3. 🧑‍💻 User-Defined Data Types

Created by the programmer for more flexible data handling:

| Data Type | Description                                        | Example |
|-----------|----------------------------------------------------|---------|
| `struct`  | Groups variables of different types                | `struct student { int id; char name[20]; };` |
| `union`   | Similar to struct but shares memory                | `union data { int i; float f; };` |
| `enum`    | Defines a list of named integer constants          | `enum day { Mon, Tue, Wed };` |

---

## 🧠 Summary Table

| Category             | Types                                               |
|----------------------|-----------------------------------------------------|
| **Basic**            | `int`, `float`, `char`, `double`                    |
| **Derived**          | Arrays, Pointers, Functions                         |
| **User-Defined**     | `struct`, `union`, `enum`                           |

---

Choosing the right data type helps you write **efficient**, **readable**, and **error-free** programs.
