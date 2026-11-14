/* USA LEVEL_16.REL:0x025448, 128-byte candidate (14 November 2026).
 * Measured pinned: 3 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern char *D_001A1AB4;
extern char D_001A1AC0[];

static inline int *Slot(int global, unsigned int off)
{
    char *base;

    base = global ? D_001A1AC0 : D_001A1AB4 + 0x864;
    return (int *)(off + (unsigned int)base);
}

int func_025448(int id, int global, int set)
{
    unsigned int n;
    unsigned int off;

    n = 0;
    off = 0;
    do {
        if (*Slot(global, off) == id) {
            if (set) {
                *(int *)(D_001A1AB4 + off + 0x884) = id;
            } else {
                *(int *)(D_001A1AB4 + off + 0x884) = 0;
            }
            *Slot(global, off) = 0;
            return 1;
        }
        off += 4;
        n++;
    } while (n < 8);
    return 0;
}
