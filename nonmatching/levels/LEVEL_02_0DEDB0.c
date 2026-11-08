/* LEVEL_02.REL:0x0DEDB0: reviewed 148-byte candidate.
 * pinned C with gnu-ee-trial links 152 bytes; first differs at +24.
 * Retry: Find a source shape for the constant preload and store schedule; the current
 * linked body is four bytes longer.
 * No matching credit.
 */
extern void *memset(void *, int, unsigned int);

int func_000DEDB0(unsigned int *record, unsigned int flags)
{
    if ((flags & 1) == 0) {
        memset(record, 0, 100);
        record[2] = 5;
        record[0] = flags;
        record[0x15] = 0xe0;
        record[0x17] = 0x100;
        record[0xe] = 0x110;
        record[6] = 8;
        record[0x13] = 0;
        record[0xb] = 0xe0;
        record[0xd] = 0x100;
        record[0xc] = 0;
        record[0x14] = 0;
    } else {
        record[0x13] = -1;
    }
    return (flags & 1) == 0;
}
