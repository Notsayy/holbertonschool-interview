# Log Parsing

This project implements a log parsing script in Python that reads lines from standard input and computes metrics based on the input format.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Python version: 3.4.3 (Ubuntu 14.04 LTS)
- All files must end with a new line
- The first line of all scripts must be `#!/usr/bin/python3`
- Code style: PEP 8 (version 1.7.x)
- All files must be executable
- A `README.md` file is mandatory

## Task

### 0. Log parsing

Write a script (`0-stats.py`) that:

- Reads stdin line by line.
- Computes and prints metrics after every 10 lines and/or on keyboard interruption (`CTRL + C`).

#### Input Format

```
<IP Address> - [<date>] "GET /projects/260 HTTP/1.1" <status code> <file size>
```

If the line does not match this format, it is skipped.

#### Metrics

- **Total file size:** Sum of all `<file size>` values.
- **Number of lines by status code:** Count for each status code (200, 301, 400, 401, 403, 404, 405, 500) in ascending order.

#### Output Example

```
File size: 11320
200: 3
301: 2
400: 1
401: 2
403: 3
404: 4
405: 2
500: 3
```

#### Notes

- Status codes not present or not integers are not printed.
- The script should not execute when imported.

## Usage

Generate logs and parse them:

```bash
./0-generator.py | ./0-stats.py
```

## Repository Structure

- `holbertonschool-interview/log_parsing/0-stats.py` — Main script
- `holbertonschool-interview/log_parsing/README.md` — Project documentation

## Author

[Notsayy](https://github.com/Notsayy)
