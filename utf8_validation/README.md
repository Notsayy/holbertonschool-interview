# UTF-8 Validation

This project contains a Python method to determine if a given data set represents a valid UTF-8 encoding.

## Requirements
- Allowed editors: vi, vim, emacs
- All files interpreted/compiled on Ubuntu 14.04 LTS using Python 3 (version 3.4.3)
- All files end with a new line
- The first line of all files: `#!/usr/bin/python3`
- Code follows PEP 8 style (version 1.7.x)
- All files are executable

## Task
**0. UTF-8 Validation**

Write a method that determines if a given data set represents a valid UTF-8 encoding.

- Prototype: `def validUTF8(data)`
- Return: `True` if data is a valid UTF-8 encoding, else return `False`
- A character in UTF-8 can be 1 to 4 bytes long
- The data set can contain multiple characters
- The data will be represented by a list of integers
- Each integer represents 1 byte of data (only the 8 least significant bits are used)

## Example Usage
```
#!/usr/bin/python3
"""
Main file for testing
"""

validUTF8 = __import__('0-validate_utf8').validUTF8

data = [65]
print(validUTF8(data))  # True

data = [80, 121, 116, 104, 111, 32, 105, 115, 32, 99, 111, 111, 108, 33]
print(validUTF8(data))  # True

data = [229, 65, 127, 256]
print(validUTF8(data))  # False
```

## Author
[Notsayy](https://github.com/Notsayy)
