#include <stddef.h>
#include "slide_line.h"

int slide_line(int *line, size_t size, int direction)
{
    size_t i, pos;
    int last_merged;

    if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
        return (0);

    if (direction == SLIDE_LEFT)
    {
        pos = 0;
        for (i = 0; i < size; i++)
            if (line[i] != 0) { line[pos] = line[i]; if (pos != i) line[i] = 0; pos++; }


        last_merged = 0;
        for (i = 0; i + 1 < pos; i++)
        {
            if (!last_merged && line[i] == line[i + 1])
                { line[i] *= 2; line[i + 1] = 0; last_merged = 1; }
            else
                last_merged = 0;
        }

        pos = 0;
        for (i = 0; i < size; i++)
            if (line[i] != 0) { line[pos] = line[i]; if (pos != i) line[i] = 0; pos++; }
    }
    else
    {
        pos = size - 1;
        for (i = size; i > 0; i--)
            if (line[i-1] != 0) { line[pos] = line[i-1]; if (pos != i-1) line[i-1] = 0; if (pos > 0) pos--; }

        last_merged = 0;
        for (i = size - 1; i > 0; i--)
        {
            if (!last_merged && line[i] == line[i-1] && line[i] != 0)
                { line[i] *= 2; line[i-1] = 0; last_merged = 1; }
            else
                last_merged = 0;
        }

        pos = size - 1;
        for (i = size; i > 0; i--)
            if (line[i-1] != 0) { line[pos] = line[i-1]; if (pos != i-1) line[i-1] = 0; if (pos > 0) pos--; }
    }
    return (1);
}