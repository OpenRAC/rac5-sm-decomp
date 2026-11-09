/* LEVEL_24:0x1B9AC0 -- placement copy of LEVEL_01_1E8DE8.c: for two 0x7C-byte records, remaps a 16-bit field through a lookup table and stores a computed result. */

extern unsigned int D_00263C80[];
extern int func_1B9208();

void func_1B9AC0(char *a0)
{
    unsigned int *p;
    unsigned int *tbl;
    unsigned int mask;
    unsigned int i;

    i = 0;
    tbl = D_00263C80;
    mask = 0xF800FFFF;
    p = (unsigned int *)(a0 + 0xAC);
    do {
        unsigned int idx;
        i++;
        idx = p[-1];
        p[0] = (p[0] & mask) | (tbl[idx] << 16);
        *(int *)((char *)p + 0x74) = func_1B9208(p[0]);
        p = (unsigned int *)((char *)p + 0x7C);
    } while (i < 2);
}
