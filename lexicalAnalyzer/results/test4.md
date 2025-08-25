# Lexical Analysis Output

## Recognized Tokens and Errors

```
[line 1] TYPE         : int
[line 1] IDENT        : helper
[line 1] PUNCT        : (
[line 1] PUNCT        : )
[line 1] PUNCT        : ;
[line 2] TYPE         : int
[line 2] IDENT        : a
[line 2] OP           : =
[line 2] NUMBER       : 10
[line 2] PUNCT        : ;
[line 3] TYPE         : int
[line 3] IDENT        : helper
[line 3] PUNCT        : (
[line 3] PUNCT        : )
[line 3] PUNCT        : {
[line 4] KEYWORD      : return
[line 4] IDENT        : a
[line 4] OP           : +
[line 4] PUNCT        : (
[line 4] TYPE         : int
[line 4] PUNCT        : )
[line 4] IDENT        : b
[line 4] PUNCT        : ;
[line 5] PUNCT        : }
```

## Symbol Table

| Name            | Type     | Dimensions   | Frequency | Return Type  | Parameters   |
|-----------------|--------------|--------------|-----------|--------------|-------------------------------------|
|a|int|-|4|-|-
|b|float|-|3|-|-
|c|char*|-|3|-|-
|helper|int|-|2|int|int a, float b, char* c ; int a, float b, char* c

## Constant Table

| Variable Name   | Line Number | Value                | Type     |
|-----------------|-------------|----------------------|----------|
|a|2|10|int