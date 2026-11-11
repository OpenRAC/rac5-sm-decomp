/* LEVEL_05:0x116010 -- placement copy of LEVEL_01_119FF0.c: reads into a slot and reports how many whole units were read. */
extern char D_0033D6D0[];
extern char D_0033D6B0[];
extern int func_028360(int slot, void *dst, int size);

int HIT_fread__FPvUiUiPi(void *dst, unsigned n, int m, unsigned slot)
{
    int size;
    int r;

    slot--;
    if (slot >= 0x20) return 0;
    size = n * m;
    D_0033D6D0[slot] = 0;
    D_0033D6B0[slot] = 0;
    r = func_028360(slot, dst, size);
    if (r < 0) {
        D_0033D6D0[slot] = 1;
        return 0;
    }
    if (((r + 0x7FF) & -0x800) < size) {
        D_0033D6B0[slot] = 1;
        return (unsigned)r / n;
    }
    return m;
}
