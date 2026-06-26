# 0x0B. Menger sponge

This project consists of implementing in C a function that prints a **2D version of the Menger sponge**, a fractal built by recursively subdividing a square into 3x3 blocks and leaving the center block empty at each level [web:1][web:30].

## Objective

Write the following function:

```c
void menger(int level);
```

- `level` represents the level of the Menger sponge to draw.
- If `level` is lower than `0`, the function must do nothing.
- A level `0` sponge is represented by a single `#` character.
- The size of a level `N` sponge is `3^N` [web:1].

## Principle

The original Menger sponge is a three-dimensional fractal first described by Karl Menger in 1926 and built by repeatedly subdividing a cube and removing central parts [web:1][web:30]. In this project, only the **2D version** is required: each level is a `3 x 3` grid of smaller sponges from the previous level, except for the center one, which is left empty [web:1].

Examples of construction:

- Level 0: `#`
- Level 1: a `3 x 3` square with the center left empty.
- Level 2: a `9 x 9` square made of 9 level 1 blocks, with the center block left empty.

## Expected files

- `0-menger.c`
- `menger.h`

## Prototype

In `menger.h`:

```c
#ifndef MENGER_H
#define MENGER_H

void menger(int level);

#endif /* MENGER_H */
```

## Compilation

The program is compiled with the math library, as specified in the project requirements [web:19].

```bash
gcc -Wall -Wextra -Werror -pedantic -o 0-menger 0-menger.c 0-main.c -lm
```

## Usage

```bash
./0-menger 0
./0-menger 1
./0-menger 2
./0-menger 3
```

## Example output

### Level 0

```text
#
```

### Level 1

````text
### ```

### Level 2

```text
#########
# ## ## #
#########
###   ###
# #   # #
###   ###
#########
# ## ## #
#########
````

## Algorithm logic

An efficient way to solve the problem is to inspect each position `(row, column)` in the final square and determine whether it should contain `#` or a space. A cell becomes empty if it belongs to the center of a `3 x 3` block at any subdivision level, which can be checked using repeated modulo and division by `3` [].

In practice:

1. Compute the size of the pattern with `3^level`.
2. Loop through each row and column.
3. For each cell:
   - if `row % 3 == 1` and `col % 3 == 1`, print a space;
   - otherwise, divide `row` and `col` by `3` and continue.
4. If no center position is found, print `#`.

This approach avoids allocating a large 2D array in memory and still reproduces the recursive structure of the fractal correctly [].

## Constraints

- Language: C
- Strict compilation with: `-Wall -Wextra -Werror -pedantic`
- Use of the math library is allowed through `-lm` []
- If `level < 0`, the function must do nothing []

## Project structure

```text
menger/
├── 0-menger.c
├── menger.h
└── 0-main.c
```

## Author

[Notsayy](https://github.com/Notsayy)

## Repository

This project is part of the `holbertonschool-interview` repository, in the `menger` directory [][].

````

Petit point important : les mentions `[web:1]` ou `[web:19]` sont des citations de chat, pas du Markdown GitHub standard, donc **il vaut mieux les retirer dans ton vrai README GitHub** pour éviter d’avoir un fichier bizarre.[8][12]

Voici la version **propre pour GitHub**, sans citations :

```md
# 0x0B. Menger sponge

This project consists of implementing in C a function that prints a **2D version of the Menger sponge**, a fractal built by recursively subdividing a square into 3x3 blocks and leaving the center block empty at each level.

## Objective

Write the following function:

```c
void menger(int level);
````

- `level` represents the level of the Menger sponge to draw.
- If `level` is lower than `0`, the function must do nothing.
- A level `0` sponge is represented by a single `#` character.
- The size of a level `N` sponge is `3^N`.

## Principle

The original Menger sponge is a three-dimensional fractal first described by Karl Menger in 1926 and built by repeatedly subdividing a cube and removing central parts. In this project, only the **2D version** is required: each level is a `3 x 3` grid of smaller sponges from the previous level, except for the center one, which is left empty.

Examples of construction:

- Level 0: `#`
- Level 1: a `3 x 3` square with the center left empty.
- Level 2: a `9 x 9` square made of 9 level 1 blocks, with the center block left empty.

## Expected files

- `0-menger.c`
- `menger.h`

## Prototype

In `menger.h`:

```c
#ifndef MENGER_H
#define MENGER_H

void menger(int level);

#endif /* MENGER_H */
```

## Compilation

The program is compiled with the math library, as specified in the project requirements.

```bash
gcc -Wall -Wextra -Werror -pedantic -o 0-menger 0-menger.c 0-main.c -lm
```

## Usage

```bash
./0-menger 0
./0-menger 1
./0-menger 2
./0-menger 3
```

## Example output

### Level 0

```text
#
```

### Level 1

```text
###
# #
###
```

### Level 2

```text
#########
# ## ## #
#########
###   ###
# #   # #
###   ###
#########
# ## ## #
#########
```

## Algorithm logic

An efficient way to solve the problem is to inspect each position `(row, column)` in the final square and determine whether it should contain `#` or a space. A cell becomes empty if it belongs to the center of a `3 x 3` block at any subdivision level, which can be checked using repeated modulo and division by `3`.

In practice:

1. Compute the size of the pattern with `3^level`.
2. Loop through each row and column.
3. For each cell:
   - if `row % 3 == 1` and `col % 3 == 1`, print a space;
   - otherwise, divide `row` and `col` by `3` and continue.
4. If no center position is found, print `#`.

This approach avoids allocating a large 2D array in memory and still reproduces the recursive structure of the fractal correctly.

## Constraints

- Language: C
- Strict compilation with: `-Wall -Wextra -Werror -pedantic`
- Use of the math library is allowed through `-lm`
- If `level < 0`, the function must do nothing

## Project structure

```text
menger/
├── 0-menger.c
├── menger.h
└── 0-main.c
```

## Author

[Notsayy](https://github.com/Notsayy)
