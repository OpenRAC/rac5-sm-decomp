/* LEVEL_08:0x12A790 -- placement copy of LEVEL_01_119FF0.c: reads into a slot and reports how many whole units were read. */
extern char D_003A0A90[];
extern char D_003A0A70[];
extern int func_029C60(int slot, void *dst, int size);

int HIT_fread__FPvUiUiPi(void *dst, unsigned n, int m, unsigned slot)
{
    int size;
    int r;

    slot--;
    if (slot >= 0x20) return 0;
    size = n * m;
    D_003A0A90[slot] = 0;
    D_003A0A70[slot] = 0;
    r = func_029C60(slot, dst, size);
    if (r < 0) {
        D_003A0A90[slot] = 1;
        return 0;
    }
    if (((r + 0x7FF) & -0x800) < size) {
        D_003A0A70[slot] = 1;
        return (unsigned)r / n;
    }
    return m;
}
