/* LEVEL_01:0x137C80 -- builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_00297DC0[];
extern unsigned int D_0021AE80[];
extern int D_002070D0[];
extern int D_002070DC;
extern int D_002070E0;
extern int func_1D44B0(unsigned int value);
extern void func_1DD2D0(unsigned int value);
extern int func_12A068(unsigned int value);

void func_137C80(void)
{
    unsigned int i;
    int *p = &D_002070DC;

    *p = func_1D44B0(((unsigned int)D_00297DC0[82] << 16) | 0xE8005041u);
    D_002070E0 = ((int (*)(unsigned int value))func_1DD2D0)(((unsigned int)D_00297DC0[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_002070D0[i] = func_12A068(D_0021AE80[i]);
    }
}
