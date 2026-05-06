</div>

<p align='center'>
    <img src="https://capsule-render.vercel.app/api?type=waving&color=db3b2a&height=300&section=header&text=Francisco%20Antunes&fontSize=90&animation=fadeIn&fontAlignY=38&desc=Junior%20Software%20Engineer%20and%20student%20@%2042%20Porto.&descAlignY=51&descAlign=62"/>

<p align="center">
  <img src="https://img.shields.io/static/v1?label=Overview&message=KrispyFbacon&color=db3b2a&style=for-the-badge&logo=GitHub" alt="GitHub Overview" width="250px"/>
  <img src="https://komarev.com/ghpvc/?username=KrispyFbacon&color=db3b2a&style=flat-square" width="149px"/>
</p>
</div>


---
 
## About
My personal C library, the very first project at 42 School. It is a custom implementation of the C standard library, built from scratch.

Extended with:
- Standard C utility functions 
- **ft_printf** — variadic printf implementation
- **ft_printf_fd** — printf variant that writes to a given file descriptor
- **get_next_line** — reads a line from a file descriptor
---
 
## Using Libft in your project
 
### 1. Clone the repository:
```bash
git clone https://github.com/KrispyFbacon/Libft.git libft
```
 
### 2. Set up your Makefile
 
Add these lines to your project's `Makefile`:
 
```makefile
# Library paths
LIBFT_DIR = libft
LIBFT     = $(LIBFT_DIR)/libft.a
 
# Build libft before your project
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
 
# Make sure libft is built before linking
# Example:
$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
```
 
### 3. Include the headers in your source files
 
```c
#include "{path_to_Libft_folder}/libft.h"
```

Depending on how your Makefile is built you might only need
```
#include "libft.h"  
```
 
### 4. Build
 
Running `make` at your project root will automatically go into the `libft/` folder, build it, and then compile your project:
 
```bash
make
```
 
Or you can build Libft manually first:
 
```bash
make -C libft
make
```
