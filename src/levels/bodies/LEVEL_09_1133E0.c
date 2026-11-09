/* LEVEL_09:0x1133E0 -- placement copy of LEVEL_01_119FF0.c: reads into a slot and reports how many whole units were read. */
extern char D_00338F90[];
extern char D_00338F70[];
extern int func_028550(int slot, void *dst, int size);

int func_1133E0(void *dst, unsigned n, int m, unsigned slot)
{
    int size;
    int r;

    slot--;
    if (slot >= 0x20) return 0;
    size = n * m;
    D_00338F90[slot] = 0;
    D_00338F70[slot] = 0;
    r = func_028550(slot, dst, size);
    if (r < 0) {
        D_00338F90[slot] = 1;
        return 0;
    }
    if (((r + 0x7FF) & -0x800) < size) {
        D_00338F70[slot] = 1;
        return (unsigned)r / n;
    }
    return m;
}
