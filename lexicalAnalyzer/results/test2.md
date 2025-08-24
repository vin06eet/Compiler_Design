# Lexical Analysis Output

## Recognized Tokens and Errors

```
[line 1] TYPE         : int
[line 1] IDENT        : main
[line 1] PUNCT        : (
[line 1] PUNCT        : )
[line 1] PUNCT        : {
[line 2] IDENT        : string
[line 2] IDENT        : s
[line 2] OP           : =
[line 2] ERROR: Unterminated string literal
[line 3] ERROR: Invalid token '@'
[line 3] IDENT        : not_allowed
[line 3] OP           : =
[line 3] NUMBER       : 5
[line 3] PUNCT        : ;
[line 4] KEYWORD      : return
[line 4] NUMBER       : 0
[line 4] PUNCT        : ;
[line 5] PUNCT        : }
```

## Symbol Table

| Name            | Type     | Dimensions   | Frequency | Return Type  | Parameters   |
|-----------------|--------------|--------------|-----------|--------------|-------------------------------------|
| string | -          | -          | 1         | -            | -                                   |
| s | -          | -          | 1        | -            | -    
| not_allowed | -          | -          | 1        | -            | -    
| main | int          | -          | 1         | int            | -    

## Constant Table

| Variable Name   | Line Number | Value                | Type     |
|-----------------|-------------|----------------------|----------|
| not_allowed               | 3           | 5                    | int      |
| -               | 4           | 0                    | int      |