# FT_PRINTF

A custom implementation of printf in C, supporting the most common format specifiers.


## About

In C, there is no built-in way to print different types with a single function call - 
you would need a separate function for each type. ft_printf solves this by parsing a 
format string and dispatching each conversion specifier to a dedicated handler function.

It uses custom utility functions instead of the standard C library.


## Functions

### Internal functions
| Function | Description |
|----------|-------------|
| `join_buffer` | Joins the newly read chunk onto the accumulated buffer and frees the old one |
| `read_buffer` | Reads from the fd in chunks of _BUFFER_SIZE_, accumulating data until EOF |
| `get_line` | Extracts the current line from the buffer up to and including \n |
| `separate` | Trims the returned line from the buffer, keeping the remainder for next call |

### Main function
| `get_next_line` | Returns the next line from a file descriptor |


## Usage

```bash
git clone https://github.com/sarabezz/get_next_line.git
cd get_next_line
```

Include the header in your file:

```c
#include "get_next_line.h"
```

Compile it with your project:

```bash
gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c your_file.c -o your_program
```

To use a custom `BUFFER_SIZE`:

```bash
gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c your_file.c -D BUFFER_SIZE=64 -o your_program
```


## Key concepts:
- `read()`has no concept of iles -- it only read raw bytes
- Buffered reading with configurable chunk size via BUFFER_SIZE
- Careful memory management with `malloc` and `free` to avoid leaks
- Acummulating data between calls using static buffer


## Project info 

| | |
|---|---|
| Language | C |
| School | 42 Madrid |
| Status | ✅ Completed |
