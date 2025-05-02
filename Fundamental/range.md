# 📏 Datatype in C with Size and Range

C data types consume varying amounts of memory. The size and range depend on whether the type is **signed** or **unsigned** and also on the system architecture (e.g., 32-bit or 64-bit).

| Data Type   | Memory Size | Signed Range                             | Unsigned Range                    |
|-------------|-------------|------------------------------------------|-----------------------------------|
| `char`      | 1 byte      | -128 to 127                              | 0 to 255                          |
| `short`     | 2 bytes     | -32,768 to 32,767                        | 0 to 65,535                       |
| `int`       | 4 bytes     | -2,147,483,648 to 2,147,483,647          | 0 to 4,294,967,295                |
| `long`      | 4 bytes     | -2,147,483,648 to 2,147,483,647          | 0 to 4,294,967,295                |
| `long long` | 8 bytes     | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 | 0 to 18,446,744,073,709,551,615 |
| `float`     | 4 bytes     | 3.4E-38 to 3.4E+38                        | N/A                               |
| `double`    | 8 bytes     | 1.7E-308 to 1.7E+308                      | N/A                               |

> ⚠️ Note: The actual range may vary depending on your system's architecture and compiler implementation.
