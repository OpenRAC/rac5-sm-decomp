/* LEVEL_18:0x126768 -- placement copy of LEVEL_01_137C80.c: builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_0024E5C0[];
extern unsigned int D_001D1EA0[];
extern int D_001BE970[];
extern int D_001BE97C;
extern int D_001BE980;
extern int func_18B028(unsigned int value);
extern void func_18FC98(unsigned int value);
extern int func_105B48(unsigned int value);

void func_126768(void)
{
    unsigned int i;
    int *p = &D_001BE97C;

    *p = func_18B028(((unsigned int)D_0024E5C0[82] << 16) | 0xE8005041u);
    D_001BE980 = ((int (*)(unsigned int value))func_18FC98)(((unsigned int)D_0024E5C0[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_001BE970[i] = func_105B48(D_001D1EA0[i]);
    }
}
