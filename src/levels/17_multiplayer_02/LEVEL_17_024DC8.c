/* LEVEL_17:0x024DC8 -- placement copy of LEVEL_16_025448.c: finds an id in the selected 8-entry table, mirrors or clears its companion entry and removes it; returns 1 when found. */
extern char *D_001950B4;
extern char D_001950C0[];

static inline int *Slot(int global, unsigned int off)
{
    char *base;

    base = global ? D_001950C0 : D_001950B4 + 0x864;
    return (int *)(off + (unsigned int)base);
}

int func_024DC8(int id, int global, int set)
{
    unsigned int n;

    n = 0;
    do {
        if (*Slot(global, n << 2) == id) {
            if (set) {
                *(int *)(D_001950B4 + (n << 2) + 0x884) = id;
            } else {
                *(int *)(D_001950B4 + (n << 2) + 0x884) = 0;
            }
            *Slot(global, n << 2) = 0;
            return 1;
        }
        n++;
    } while (n < 8);
    return 0;
}
