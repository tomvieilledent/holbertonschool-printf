```mermaid
flowchart TD
    start((printf_c)) --> getchar[read char]
    getchar --> printchar[print char]
    putchar --> returnchar[return 1]
```