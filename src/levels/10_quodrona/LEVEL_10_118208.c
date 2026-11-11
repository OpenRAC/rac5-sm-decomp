/* LEVEL_10:0x118208 -- placement copy of LEVEL_01_119FF0.c: reads into a slot and reports how many whole units were read. */
extern char D_0035AC10[];
extern char D_0035ABF0[];
extern int func_0294C0(int slot, void *dst, int size);

int func_118208(void *dst, unsigned n, int m, unsigned slot)
{
    int size;
    int r;

    slot--;
    if (slot >= 0x20) return 0;
    size = n * m;
    D_0035AC10[slot] = 0;
    D_0035ABF0[slot] = 0;
    r = func_0294C0(slot, dst, size);
    if (r < 0) {
        D_0035AC10[slot] = 1;
        return 0;
    }
    if (((r + 0x7FF) & -0x800) < size) {
        D_0035ABF0[slot] = 1;
        return (unsigned)r / n;
    }
    return m;
}
