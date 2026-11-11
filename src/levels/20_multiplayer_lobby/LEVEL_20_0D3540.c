/* LEVEL_20:0x0D3540 -- placement copy of LEVEL_01_119FF0.c: reads into a slot and reports how many whole units were read. */
extern char D_001C2F00[];
extern char D_001C2EE0[];
extern int func_023C48(int slot, void *dst, int size);

int func_0D3540(void *dst, unsigned n, int m, unsigned slot)
{
    int size;
    int r;

    slot--;
    if (slot >= 0x20) return 0;
    size = n * m;
    D_001C2F00[slot] = 0;
    D_001C2EE0[slot] = 0;
    r = func_023C48(slot, dst, size);
    if (r < 0) {
        D_001C2F00[slot] = 1;
        return 0;
    }
    if (((r + 0x7FF) & -0x800) < size) {
        D_001C2EE0[slot] = 1;
        return (unsigned)r / n;
    }
    return m;
}
