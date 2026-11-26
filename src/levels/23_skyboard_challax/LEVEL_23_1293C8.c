/* LEVEL_23:0x1293C8 -- placement copy of LEVEL_01_137C80.c: builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_00269200[];
extern unsigned int D_001EDE88[];
extern int D_001DA4D0[];
extern int D_001DA4DC;
extern int D_001DA4E0;
extern int func_1A5E48(unsigned int value);
extern void func_1AE750(unsigned int value);
extern int func_11AEE0(unsigned int value);

void func_1293C8(void)
{
    unsigned int i;
    int *p = &D_001DA4DC;

    *p = func_1A5E48(((unsigned int)D_00269200[82] << 16) | 0xE8005041u);
    D_001DA4E0 = ((int (*)(unsigned int value))func_1AE750)(((unsigned int)D_00269200[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_001DA4D0[i] = func_11AEE0(D_001EDE88[i]);
    }
}
