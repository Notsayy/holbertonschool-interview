#!/usr/bin/python3
def canUnlockAll(boxes):
    """
    Determines if all boxes can be opened.
    :param boxes: List of lists, each containing keys to other boxes
    :return: True if all boxes can be opened, False otherwise
    """
    n = len(boxes)
    opened = set([0])
    keys = [0]

    while keys:
        current = keys.pop()
        for key in boxes[current]:
            if key < n and key not in opened:
                opened.add(key)
                keys.append(key)

    return len(opened) == n
