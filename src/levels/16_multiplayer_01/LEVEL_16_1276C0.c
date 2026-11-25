/* LEVEL_16:0x1276C0 -- placement copy of LEVEL_01_137C80.c: builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_0024E240[];
extern unsigned int D_001D0958[];
extern int D_001BD4F0[];
extern int D_001BD4FC;
extern int D_001BD500;
extern int func_189B88(unsigned int value);
extern void func_18E7F8(unsigned int value);
extern int func_106E98(unsigned int value);

void func_1276C0(void)
{
    unsigned int i;
    int *p = &D_001BD4FC;

    *p = func_189B88(((unsigned int)D_0024E240[82] << 16) | 0xE8005041u);
    D_001BD500 = ((int (*)(unsigned int value))func_18E7F8)(((unsigned int)D_0024E240[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_001BD4F0[i] = func_106E98(D_001D0958[i]);
    }
}
