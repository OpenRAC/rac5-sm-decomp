/* LEVEL_01:0x119FF0 -- reads into a slot and reports how many whole units were read. */
extern char D_00351810[];
extern char D_003517F0[];
extern int func_0296E8(int slot, void *dst, int size);

int HIT_fread__FPvUiUiPi(void *dst, unsigned n, int m, unsigned slot)
{
    int size;
    int r;

    slot--;
    if (slot >= 0x20) return 0;
    size = n * m;
    D_00351810[slot] = 0;
    D_003517F0[slot] = 0;
    r = func_0296E8(slot, dst, size);
    if (r < 0) {
        D_00351810[slot] = 1;
        return 0;
    }
    if (((r + 0x7FF) & -0x800) < size) {
        D_003517F0[slot] = 1;
        return (unsigned)r / n;
    }
    return m;
}
