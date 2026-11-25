/* LEVEL_04:0x185A60 -- builds the fixed stream word from the global seed (high half) and the 0xA0006044 tag, registers it, then derives the scaled span (+0x14) of the global block from its bounds (+0xC, +0x10). */
extern unsigned int D_002B25E8;
extern unsigned int D_003B0718;
extern int D_002211FC;
extern float D_00221200[];
extern char D_00221218[];

extern void func_1FE0C0(void *arg);
extern void func_1FE018(char *block);

void func_185A60(void)
{
    float *span;

    D_003B0718 = (D_002B25E8 << 16) | 0xA0006044U;
    D_002211FC = ((int (*)(unsigned int))func_1FE0C0)(D_003B0718);
    ((void (*)(char *, unsigned int))func_1FE018)(D_00221218, D_003B0718);
    span = D_00221200;
    span[5] = (span[4] - span[3]) * 0x1p-31f;
}
