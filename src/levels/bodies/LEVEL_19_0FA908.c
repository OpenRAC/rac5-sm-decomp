/* LEVEL_19:0x0FA908 -- placement copy of LEVEL_01_119FF0.c: reads into a slot and reports how many whole units were read. */
extern char D_0029F840[];
extern char D_0029F820[];
extern int func_026CE8(int slot, void *dst, int size);

int func_0FA908(void *dst, unsigned n, int m, unsigned slot)
{
    int size;
    int r;

    slot--;
    if (slot >= 0x20) return 0;
    size = n * m;
    D_0029F840[slot] = 0;
    D_0029F820[slot] = 0;
    r = func_026CE8(slot, dst, size);
    if (r < 0) {
        D_0029F840[slot] = 1;
        return 0;
    }
    if (((r + 0x7FF) & -0x800) < size) {
        D_0029F820[slot] = 1;
        return (unsigned)r / n;
    }
    return m;
}
