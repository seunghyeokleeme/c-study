# Formatted Input/Output

- printf function
- scanf function

> The printf function is designed to display the contents of a string, known as the **format string**, with values possibly inserted at specified points in the string.

```c
printf(string, expr1, expr2, ...);
```

## conversion specifications

> %m.pX or %-m.pX

m, p 는 integer constant, X is letter이다. m, p는 optional

- m(minimum field width)
- p(precision)
  - %d: the minimum number of digits
  - %e, %f: how many digits should appear after the decimal point
  - %g: %e or %f

## Esacpe Sequences

- `\"`
- `\a`
- `\b`
- `\n`
- `\t`

## Scanf function
