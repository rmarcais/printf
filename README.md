![Holberton France Logo](https://images.squarespace-cdn.com/content/v1/60bf70d860f31b4f60455443/1625061110826-904UGWRZ9PX81YWARXMT/HolbertonFRANCEFichier+16.png?format=1500w)

___

# 0x11. C - printf
## Background context
<p>Write your own printf function.</p>

---

### Table

| Files                                                                                         | Description         |
| --------------------------------------------------------------------------------------------- | ------------------- |
| [main.h](https://github.com/lva-3600/printf/blob/main/main.h "Header file")                   | Header file         |
| [printf.c](https://github.com/lva-3600/printf/blob/main/_printf.c "printf function")          | printf function     |
| [functions.c](https://github.com/lva-3600/printf/blob/main/functions.c "Data type functions") | Data type functions |
| [tools.c](https://github.com/lva-3600/printf/blob/main/tools.c "Utility functions")           | Utility functions   |

---
## How to use the function ?

* If you want to call the function without any arguments, type ```_printf("format");``` and write what you want instead of ```format```. Exemple:
  ```c
   _printf("Hello World !");
   ```
* So now if you want to call _printf with arguments, it will be a bit different. Firstly, in ```format```, you have to put a ```%``` sign where your argument will be. When you want to put more than one argument, put a ```%``` sign as many times there are argment. The first argument will take the place of the first ```%``` sign, the second argument will take the place of the second one... (Be careful to separate your arguments whith commas). And the last thing you have to know is that you have to put a **format specifier** just after the ```%``` sign.

* Here's the list of **format specifiers**:
  * d : for a decimal (base 10) number
  * i : for an integer in base 10
  * c : for a single character
  * s : for a string

* To finish, here's an exemple of using the fonction with arguments :
  ```c
  _printf("Hello, my name is %s and I am %d years old !\n", "Rémi", 18)
  ```
  This is the output:
  ```c
  Hello, my name is Rémi and I am 18 years old !
  ```

---
## About he man page
### **What is a man page ?**
A man page is a piece of documentation that is distributed and read digitally. A man covers topics from command-line tools, programs, system calls...
### **How to read a man page ?**
To read a man page, you can run the command:
```c
man <something>
```
For exemple, if you want to know more about man, you can run in your terminal:
```c
man man
```
### **What is the compisition of a man page ?**
A man page is always composed of different sections. We often find the sections:
* NAME
* SYNOPSIS
* DESCRIPTION
* RETURN VALUE
* EXAMPLES
* AUTHOR(S).

### **Language**
The man page is written in the Groff language.

---

## Requirements
### **General**
* Allowed editors: ```vi```, ```vim```, ```emacs```
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```
* All your files should end with a new line
* A ```README.md``` file, at the root of the folder of the project is mandatory
* Your code should use the ```Betty``` style. It will be checked using ```betty-style.pl``` and ```betty-doc.pl```
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the ```main.c``` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own ```main.c``` files at compilation. Our ```main.c``` files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called ```main.h```
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the ```_putchar``` function for this project

### **Github**
* There should be one project repository per group.

---

## More info
### **Authorized functions and macros**

* ```write``` (```man 2 write```)
* ```malloc``` (```man 3 malloc```)
* ```free``` (```man 3 free```)
* ```va_start``` (```man 3 va_start```)
* ```va_end``` (```man 3 va_end```)
* ```va_copy``` (```man 3 va_copy```)
* ```va_arg``` (```man 3 va_arg```)

### **Compilation**
* Your code will be compiled this way:
```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
* As a consequence, be careful not to push any c file containing a ```main``` function in the root directory of your project (you could have a ```test``` folder containing all your tests files including main functions)
* Our main files will include your main header file (```main.h```): ```#include main.h```
* You might want to look at the ```gcc``` flag ```-Wno-format``` when testing with your ```_printf``` and the standard ```printf```.
* We strongly encourage you to work all together on a set of tests
* If the task does not specify what to do with an edge case, do the same as ```printf```
---

## LinedIn

<a href="https://www.linkedin.com/in/tommy-chanthavisouk-579246222/"><img src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/LinkedIn_logo_initials.png/768px-LinkedIn_logo_initials.png" width="40" height="40"/></a> &emsp; **- Tommy Chanthavisouk** &emsp;
<a href="https://www.linkedin.com/in/r%C3%A9mi-mar%C3%A7ais-274a4421a/"><img src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/LinkedIn_logo_initials.png/768px-LinkedIn_logo_initials.png" width="40" height="40"/></a> &emsp; **- Rémi Marçais**

---

*By Rémi Marçais & Tommy Chanthavisouk*
