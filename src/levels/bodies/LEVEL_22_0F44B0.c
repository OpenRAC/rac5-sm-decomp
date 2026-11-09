/* LEVEL_22:0x0F44B0 -- placement copy of LEVEL_01_119FF0.c: reads into a slot and reports how many whole units were read. */
extern char D_002A7200[];
extern char D_002A71E0[];
extern int func_023C80(int slot, void *dst, int size);

int func_0F44B0(void *dst, unsigned n, int m, unsigned slot)
{
    int size;
    int r;

    slot--;
    if (slot >= 0x20) return 0;
    size = n * m;
    D_002A7200[slot] = 0;
    D_002A71E0[slot] = 0;
    r = func_023C80(slot, dst, size);
    if (r < 0) {
        D_002A7200[slot] = 1;
        return 0;
    }
    if (((r + 0x7FF) & -0x800) < size) {
        D_002A71E0[slot] = 1;
        return (unsigned)r / n;
    }
    return m;
}
