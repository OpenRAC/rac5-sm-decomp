/* LEVEL_02:0x120338 -- placement copy of LEVEL_01_119FF0.c: reads into a slot and reports how many whole units were read. */
extern char D_00368D10[];
extern char D_00368CF0[];
extern int func_029EB0(int slot, void *dst, int size);

int HIT_fread__FPvUiUiPi(void *dst, unsigned n, int m, unsigned slot)
{
    int size;
    int r;

    slot--;
    if (slot >= 0x20) return 0;
    size = n * m;
    D_00368D10[slot] = 0;
    D_00368CF0[slot] = 0;
    r = func_029EB0(slot, dst, size);
    if (r < 0) {
        D_00368D10[slot] = 1;
        return 0;
    }
    if (((r + 0x7FF) & -0x800) < size) {
        D_00368CF0[slot] = 1;
        return (unsigned)r / n;
    }
    return m;
}
