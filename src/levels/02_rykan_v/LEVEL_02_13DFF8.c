/* LEVEL_02:0x13DFF8 -- placement copy of LEVEL_01_137C80.c: builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_002AF2C0[];
extern unsigned int D_0022FED0[];
extern int D_0021C090[];
extern int D_0021C09C;
extern int D_0021C0A0;
extern int func_1E9148(unsigned int value);
extern int func_1F1F68(unsigned int value);
extern int func_130418(unsigned int value);

void func_13DFF8(void)
{
    unsigned int i;
    int *p = &D_0021C09C;

    *p = func_1E9148(((unsigned int)D_002AF2C0[82] << 16) | 0xE8005041u);
    D_0021C0A0 = func_1F1F68(((unsigned int)D_002AF2C0[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_0021C090[i] = func_130418(D_0022FED0[i]);
    }
}
