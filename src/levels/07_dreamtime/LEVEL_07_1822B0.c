/* LEVEL_07:0x1822B0 -- placement copy of LEVEL_04_185A60.c: builds the fixed stream word from the global seed (high half) and the 0xA0006044 tag, registers it, then derives the scaled span (+0x14) of the global block from its bounds (+0xC, +0x10). */
extern unsigned int D_002AD6E8;
extern unsigned int D_003AB7A0;
extern int D_0021BF7C;
extern float D_0021BF80[];
extern char D_0021BF98[];

extern void func_1F8320(void *arg);
extern void func_1F8278(char *block);

void func_1822B0(void)
{
    float *span;

    D_003AB7A0 = (D_002AD6E8 << 16) | 0xA0006044U;
    D_0021BF7C = ((int (*)(unsigned int))func_1F8320)(D_003AB7A0);
    ((void (*)(char *, unsigned int))func_1F8278)(D_0021BF98, D_003AB7A0);
    span = D_0021BF80;
    span[5] = (span[4] - span[3]) * 0x1p-31f;
}
