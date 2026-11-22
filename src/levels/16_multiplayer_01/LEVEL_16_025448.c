/* LEVEL_16:0x025448 -- finds an id in the selected 8-entry table, mirrors or clears its companion entry and removes it; returns 1 when found. */
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

    n = 0;
    do {
        if (*Slot(global, n << 2) == id) {
            if (set) {
                *(int *)(D_001A1AB4 + (n << 2) + 0x884) = id;
            } else {
                *(int *)(D_001A1AB4 + (n << 2) + 0x884) = 0;
            }
            *Slot(global, n << 2) = 0;
            return 1;
        }
        n++;
    } while (n < 8);
    return 0;
}
