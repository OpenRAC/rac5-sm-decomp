/* LEVEL_01.REL:0x0A97F8: reviewed 128-byte candidate.
 * pinned C with gnu-ee-trial links 124 bytes; first differs at +20.
 * Retry: Find a loop source whose byte load is at the loop header, with the retail
 * alignment and accumulator live ranges.
 * No matching credit.
 */
extern void func_132060(char *, int *);

int func_0A97F8(char *text)
{
    int length;
    if (text == 0)
        return 0;
    length = 0;
    if (*text != 0) {
        do {
            unsigned char current = (unsigned char)text[length];
            length++;
            if ((current ^ 0x95) == 0) {
                int skip = 0;
                func_132060(text + length, &skip);
                length += skip;
            }
        } while (text[length] != 0);
    }
    return length;
}
