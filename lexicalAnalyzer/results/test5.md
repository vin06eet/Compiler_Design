# Lexical Analysis Output

## Recognized Tokens and Errors

```
[line 11] PREPROC      : #include <stdio.h>
[line 12] PREPROC      : #include <stdlib.h>
[line 14] TYPE         : int
[line 14] IDENT        : add
[line 14] PUNCT        : (
[line 14] PUNCT        : )
[line 14] PUNCT        : {
[line 15] KEYWORD      : return
[line 15] IDENT        : x
[line 15] OP           : +
[line 15] IDENT        : y
[line 15] PUNCT        : ;
[line 16] PUNCT        : }
[line 18] TYPE         : int
[line 18] IDENT        : main
[line 18] PUNCT        : (
[line 18] PUNCT        : )
[line 18] PUNCT        : {
[line 19] TYPE         : int
[line 19] IDENT        : a
[line 19] PUNCT        : ,
[line 19] IDENT        : b
[line 19] PUNCT        : ;
[line 20] IDENT        : scanf
[line 20] PUNCT        : (
[line 20] PUNCT        : )
[line 20] PUNCT        : ;
[line 21] TYPE         : int
[line 21] IDENT        : sum
[line 21] OP           : =
[line 21] IDENT        : add
[line 21] PUNCT        : (
[line 21] PUNCT        : )
[line 21] PUNCT        : ;
[line 22] IDENT        : printf
[line 22] PUNCT        : (
[line 22] PUNCT        : )
[line 22] PUNCT        : ;
[line 23] KEYWORD      : return
[line 23] NUMBER       : 0
[line 23] PUNCT        : ;
[line 24] PUNCT        : }
```

## Symbol Table

| Name            | Type     | Dimensions   | Frequency | Return Type  | Parameters   |
|-----------------|--------------|--------------|-----------|--------------|-------------------------------------|
sum       |           int      |       -    |        2       |   -          |     -
a       |             int     |        -      |      4     |     -       |        -|
b |                   int    |         -   |         4   |       -        |       -
d  |                  "%d%   |         -    |        2       |   -      |         -
x   |                 int     |        -       |     2         | -         |      -
y    |                int        |     -      |      2      |    -     |          -
scanf |               -  |             -    |        1    |      unknown    |     "%d%d", &a, &b
add    |              int       |      -     |       2      |    int       |      int x, int y ; a, b
printf  |             -      |         -    |        1     |     unknown    |     "Sum of %d and %d is %d.", a, b, sum
main     |            int    |         -     |       1      |    int             


## Constant Table

| Variable Name   | Line Number | Value                | Type     |
|-----------------|-------------|----------------------|----------|
|-|23|0|int