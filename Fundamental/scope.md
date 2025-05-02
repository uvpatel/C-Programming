# 📍 Scope and Lifetime of a Variable in C

Understanding **scope** and **lifetime** is essential for managing variables properly in C programming.

---

## 🔄 Scope vs Lifetime

- **Scope**: Defines *where* a variable can be accessed in the code.
- **Lifetime**: Defines *how long* a variable exists in memory during program execution.

Misunderstanding these can cause errors like **unexpected values**, **memory leaks**, or **logic bugs**.

---

## 📌 Local Scope

- A variable declared inside a function is **local** to that function.
- It cannot be accessed outside the function.

```c
#include <stdio.h>

void myFunction() {
    int localVar = 5; // local scope
    printf("Local variable: %d\n", localVar);
}
```

- Local variables are **automatic** by default — they are created when the function is called and destroyed when it ends.

---

## 🌍 Global Scope

- A variable declared **outside all functions** is global.
- It can be accessed by **any function** after its declaration.

```c
#include <stdio.h>

int globalVar = 10; // global scope

void display() {
    printf("Global variable in display(): %d\n", globalVar);
}

int main() {
    printf("Global variable in main(): %d\n", globalVar);
    display();
    return 0;
}
```

- Global variables **remain in memory** for the entire **duration** of the program.

---

## 🧠 Summary

| Scope Type | Where Accessible           | Lifetime             |
|------------|----------------------------|----------------------|
| Local      | Within the declaring block | Until block ends     |
| Global     | Entire program              | Until program ends   |

---

Use the right scope to keep your code **modular**, **efficient**, and **free from side effects**.
