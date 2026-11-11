/* LEVEL_04:0x125558 -- placement copy of LEVEL_01_119FF0.c: reads into a slot and reports how many whole units were read. */
extern char D_0036C010[];
extern char D_0036BFF0[];
extern int func_029190(int slot, void *dst, int size);

int func_125558(void *dst, unsigned n, int m, unsigned slot)
{
    int size;
    int r;

    slot--;
    if (slot >= 0x20) return 0;
    size = n * m;
    D_0036C010[slot] = 0;
    D_0036BFF0[slot] = 0;
    r = func_029190(slot, dst, size);
    if (r < 0) {
        D_0036C010[slot] = 1;
        return 0;
    }
    if (((r + 0x7FF) & -0x800) < size) {
        D_0036BFF0[slot] = 1;
        return (unsigned)r / n;
    }
    return m;
}
