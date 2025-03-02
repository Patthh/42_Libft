# 42 Libft

██╗░░░░░██╗██████╗░███████╗████████╗ <br>
██║░░░░░██║██╔══██╗██╔════╝╚══██╔══╝ <br>
██║░░░░░██║██████╦╝█████╗░░░░░██║░░░ <br>
██║░░░░░██║██╔══██╗██╔══╝░░░░░██║░░░ <br>
███████╗██║██████╦╝██║░░░░░░░░██║░░░ <br>
╚══════╝╚═╝╚═════╝░╚═╝░░░░░░░░╚═╝░░░ <br>

## 📖 What is `libft` 📚?
<details>
<summary><b>A personal C library of essential functions</b></summary><br>
<p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Libft is the first project in the curriculum of École 42, a coding school known for its project-based learning approach.
The Libft project requires students to recreate various standard C library functions, as well as additional utility functions, that will be used in all future C projects at the school.
The goal of this project is to deepen understanding of data structures, memory allocation, string manipulation, and linked lists while building a personal toolbox that grows with each student's coding journey.
</p>
</details>

## ✅ Status
<details>
<summary><b>Project completion status</b></summary><br>
<p align="center">
Completed on: 2023-10-03 <br> 125/100</p>
</details>

## 🚀 Usage
To clone and compile:
```shell
git clone https://github.com/Patthh/42_libft.git
cd 42_libft && make
```

To use in your project:
```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, 42!");
    ft_putendl_fd(str, 1);
    free(str);
    return (0);
}
```

Compile with:
```shell
cc -Wall -Wextra -Werror your_program.c -L. -lft
```
* `cc` C Compiler that translates your C code into an executable program
* `-Wall -Wextra -Werror`: Compiler flags that enable warnings and treat warnings as errors, enforcing clean code
* `your_program.c`: Your source code file that's being compiled
* `-L.`: Tells the compiler to look for libraries in the current directory (the `.` means "here")
* `-lft` : Links against the libft library (the lib prefix is assumed, so `-lft` looks for `libft.a` or `libft.so`)

## ✨ Features
- 🧠 Reimplementation of libc functions
- 🔤 String manipulation (comparison, duplication, joining)
- 🔍 Character testing and transformation
- 💾 Memory management (allocation, copying, setting)
- 📋 List creation and manipulation
- 🖨️ File descriptor operations
- 🔢 Numeric conversions (atoi, itoa)
- 📦 Additional utility functions that's not found in libc
- 🔄 Generic data structure handling
- 📝 Rigorous error checking and edge case handling

> [!WARNING]
> Some functions allocate memory that must be properly freed to avoid leaks

## 🛠️ Implementation Details
<details>
<summary><b>Function Categories</b></summary><br>
<p>The Libft library consists of these main categories:</p>

| Category | Description |
|---------|-------------|
| 📊 Libc Functions | Recreated standard library functions (memset, strlen, etc.) |
| 🧵 String Functions | String manipulation utilities (strjoin, strtrim, etc.) |
| 🧮 Conversion Functions | Type conversion utilities (itoa, atoi, etc.) |
| 📋 List Functions | Linked list manipulation (lstnew, lstadd_back, etc.) |
| 📝 Character Functions | Character testing and manipulation (isalpha, toupper, etc.) |
| 📤 Output Functions | Writing to file descriptors (putchar_fd, putstr_fd, etc.) |
| 🧩 Additional Functions | Extra utility functions (substr, split, etc.) |

</details>


<div align="center">
  <img src="https://media1.giphy.com/media/v1.Y2lkPTc5MGI3NjExdGM2NGMyMWx4bDh2a3pmbHhwaTllMW0zc29zaDlhOHB2YWRmbHI4ZCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/8YZq4nB8Fh5x0pyjI2/giphy.gif" width="400" alt="Library Building Blocks">
  <br>
  <i>A journey into fundamental programming building blocks</i><br><br><br>
</div>

---
<div align="center">
  <p>Made with ❤️ and lots of 🧩</p>
</div>
