# Star Wars API - Character Script

This project contains a Node.js script that fetches and displays character names from a specified Star Wars movie using the Star Wars API (SWAPI).

## Requirements

- Interpreted on Ubuntu 14.04 LTS using `node` (version 10.14.x)
- Code compliant with `semistandard` rules (Standard JS + semicolons)
- Uses the `request` module

## Task

### 0. Star Wars Characters

The script `0-starwars_characters.js` takes a Movie ID as its first positional argument and prints all character names featured in that movie, maintaining the exact order defined in the film's `/films/` API endpoint.

#### Usage

```bash
./0-starwars_characters.js <Movie_ID>
```

#### Example

```bash
$ ./0-starwars_characters.js 3
Luke Skywalker
C-3PO
R2-D2
Darth Vader
Leia Organa
Obi-Wan Kenobi
Chewbacca
Han Solo
Jabba Desilijic Tiure
Wedge Antilles
Yoda
Palpatine
Boba Fett
Lando Calrissian
Ackbar
Mon Mothma
Arvel Crynyd
Wicket Systri Warrick
Nien Nunb
Bib Fortuna
```
