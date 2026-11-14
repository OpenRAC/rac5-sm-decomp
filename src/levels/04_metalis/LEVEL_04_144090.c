/* LEVEL_04:0x144090 -- placement copy of LEVEL_01_137C80.c: builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_002B25C0[];
extern unsigned int D_00234888[];
extern int D_002204F0[];
extern int D_002204FC;
extern int D_00220500;
extern int func_1EB498(unsigned int value);
extern int func_1F5470(unsigned int value);
extern int func_1364E8(unsigned int value);

void func_144090(void)
{
    unsigned int i;
    int *p = &D_002204FC;

    *p = func_1EB498(((unsigned int)D_002B25C0[82] << 16) | 0xE8005041u);
    D_00220500 = func_1F5470(((unsigned int)D_002B25C0[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_002204F0[i] = func_1364E8(D_00234888[i]);
    }
}
