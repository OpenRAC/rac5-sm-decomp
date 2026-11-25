/* LEVEL_10:0x135A58 -- placement copy of LEVEL_01_137C80.c: builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_002A11C0[];
extern unsigned int D_00223E58[];
extern int D_0020FD30[];
extern int D_0020FD3C;
extern int D_0020FD40;
extern int func_1DA0C0(unsigned int value);
extern void func_1E4C28(unsigned int value);
extern int func_127EC8(unsigned int value);

void func_135A58(void)
{
    unsigned int i;
    int *p = &D_0020FD3C;

    *p = func_1DA0C0(((unsigned int)D_002A11C0[82] << 16) | 0xE8005041u);
    D_0020FD40 = ((int (*)(unsigned int value))func_1E4C28)(((unsigned int)D_002A11C0[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_0020FD30[i] = func_127EC8(D_00223E58[i]);
    }
}
