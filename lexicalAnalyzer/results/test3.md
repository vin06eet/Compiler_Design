# Lexical Analysis Output

## Recognized Tokens and Errors

```
[line 1] PREPROC      : #include <stdio.h>
[line 2] PREPROC      : #include <stdlib.h>
[line 3] PREPROC      : #include <stdbool.h>
[line 4] TYPE         : int
[line 4] IDENT        : globalVar
[line 4] OP           : =
[line 4] NUMBER       : 10
[line 4] PUNCT        : ;
[line 5] TYPE         : int
[line 5] IDENT        : main
[line 5] PUNCT        : (
[line 5] PUNCT        : {
[line 6] TYPE         : int
[line 6] IDENT        : arr
[line 6] PUNCT        : [10]
[line 6] OP           : =
[line 6] PUNCT        : {
[line 6] NUMBER       : 1
[line 6] PUNCT        : ,
[line 6] NUMBER       : 2
[line 6] PUNCT        : ,
[line 6] NUMBER       : 3
[line 6] PUNCT        : ,
[line 6] NUMBER       : 4
[line 6] PUNCT        : ,
[line 6] NUMBER       : 5
[line 6] PUNCT        : ,
[line 6] NUMBER       : 6
[line 6] PUNCT        : ,
[line 6] NUMBER       : 7
[line 6] PUNCT        : ,
[line 6] NUMBER       : 8
[line 6] PUNCT        : ,
[line 6] NUMBER       : 9
[line 6] PUNCT        : ,
[line 6] NUMBER       : 10
[line 6] PUNCT        : }
[line 6] PUNCT        : ;
[line 7] TYPE         : int
[line 7] IDENT        : b
[line 7] OP           : =
[line 7] NUMBER       : 1000
[line 7] PUNCT        : ;
[line 14] KEYWORD      : return
[line 14] IDENT        : b
[line 14] OP           : *
[line 14] IDENT        : b
[line 14] OP           : *
[line 14] IDENT        : b
[line 14] PUNCT        : ;
[line 15] PUNCT        : }
```

## Symbol Table

| Name            | Type     | Dimensions   | Frequency | Return Type  | Parameters   |
|-----------------|--------------|--------------|-----------|--------------|-------------------------------------|
|b|int|-|4|-|-
|globalVar|int|-|1|-|-
|arr|int|[10]|1|int|-

## Constant Table

| Variable Name   | Line Number | Value                | Type     |
|-----------------|-------------|----------------------|----------|
|globalVar|4|10|int
|-|6|1|int
|-|6|2|int
|-|6|3|int
|-|6|4|int
|-|6|5|int
|-|6|6|int
|-|6|7|int
|-|6|8|int
|-|6|9|int
|-|6|0|int
|b|7|1000|int