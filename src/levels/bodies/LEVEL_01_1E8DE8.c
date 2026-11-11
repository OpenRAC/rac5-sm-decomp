/* LEVEL_01:0x1E8DE8 -- for two 0x7C-byte records, remaps a 16-bit field through a lookup table and stores a computed result. */

extern unsigned int D_00297DC0[];
extern int func_1E8530(unsigned int x);

void func_1E8DE8(char *a0)
{
    unsigned int *p;
    unsigned int *tbl;
    unsigned int mask;
    unsigned int i;

    i = 0;
    tbl = D_00297DC0;
    mask = 0xF800FFFF;
    p = (unsigned int *)(a0 + 0xAC);
    do {
        unsigned int idx;
        i++;
        idx = p[-1];
        p[0] = (p[0] & mask) | (tbl[idx] << 16);
        *(int *)((char *)p + 0x74) = func_1E8530(p[0]);
        p = (unsigned int *)((char *)p + 0x7C);
    } while (i < 2);
}
