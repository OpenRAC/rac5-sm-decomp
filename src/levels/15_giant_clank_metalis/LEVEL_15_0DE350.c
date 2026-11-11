/* LEVEL_15:0x0DE350 -- placement copy of LEVEL_01_119FF0.c: reads into a slot and reports how many whole units were read. */
extern char D_00268E80[];
extern char D_00268E60[];
extern int func_022EC0(int slot, void *dst, int size);

int func_0DE350(void *dst, unsigned n, int m, unsigned slot)
{
    int size;
    int r;

    slot--;
    if (slot >= 0x20) return 0;
    size = n * m;
    D_00268E80[slot] = 0;
    D_00268E60[slot] = 0;
    r = func_022EC0(slot, dst, size);
    if (r < 0) {
        D_00268E80[slot] = 1;
        return 0;
    }
    if (((r + 0x7FF) & -0x800) < size) {
        D_00268E60[slot] = 1;
        return (unsigned)r / n;
    }
    return m;
}
