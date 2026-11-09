/* LEVEL_23:0x10B558 -- placement copy of LEVEL_01_119FF0.c: reads into a slot and reports how many whole units were read. */
extern char D_00322C50[];
extern char D_00322C30[];
extern int func_027258(int slot, void *dst, int size);

int func_10B558(void *dst, unsigned n, int m, unsigned slot)
{
    int size;
    int r;

    slot--;
    if (slot >= 0x20) return 0;
    size = n * m;
    D_00322C50[slot] = 0;
    D_00322C30[slot] = 0;
    r = func_027258(slot, dst, size);
    if (r < 0) {
        D_00322C50[slot] = 1;
        return 0;
    }
    if (((r + 0x7FF) & -0x800) < size) {
        D_00322C30[slot] = 1;
        return (unsigned)r / n;
    }
    return m;
}
