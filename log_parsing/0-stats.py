#!/usr/bin/python3
"""Log parsing script that processes web server access logs from stdin."""

import sys


def print_statistics(total_size, status_counts):
    """
    Displays accumulated log statistics in required format.

    Prints total file size first, then status codes with their counts
    in ascending order. Only shows status codes that appeared at least once.

    Args:
        total_size (int): Total sum of all processed file sizes
        status_counts (dict): Status code to occurrence count mapping
    """
    print("File size: {}".format(total_size))
    for code in sorted(status_counts.keys()):
        if status_counts[code] != 0:
            print("{}: {}".format(code, status_counts[code]))


def process_log_line(parts, status_counts, total_size):
    """
    Extracts and accumulates metrics from a single log line.

    Safely parses status code and file size from the last two fields.
    Only updates counters for predefined valid status codes.

    Args:
        parts (list): Split words from log line
        status_counts (dict): Status code counters to update
        total_size (int): Current total file size to increment

    Returns:
        tuple: (updated_total_size, updated_status_counts)
    """
    try:
        size = int(parts[-1])
        total_size += size
    except (IndexError, ValueError):
        pass

    try:
        status = parts[-2]
        if status in status_counts:
            status_counters[status] += 1
    except IndexError:
        pass

    return total_size, status_counts


if __name__ == "__main__":
    """
    Main execution logic for log parsing.

    Reads stdin line-by-line, processes valid log entries,
    prints statistics every 10 lines or on CTRL+C interruption.
    """
    total_size = 0
    status_codes = ["200", "301", "400", "401", "403", "404", "405", "500"]
    status_counters = {code: 0 for code in status_codes}
    processed_lines = 0

    try:
        for line in sys.stdin:
            parts = line.split()
            total_size, status_counters = process_log_line(
                parts, status_counters, total_size
            )
            processed_lines += 1
            if processed_lines % 10 == 0:
                print_statistics(total_size, status_counters)
    except KeyboardInterrupt:
        print_statistics(total_size, status_counters)
        raise
    print_statistics(total_size, status_counters)
