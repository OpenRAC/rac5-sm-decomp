/* LEVEL_04:0x0CD4C0 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_0021A0CC;
extern void func_141B60(int *p, int a1);

void func_0CD4C0(int *p)
{
    if (D_0021A0CC == 1) {
        func_141B60(p, 0x1D);
    } else {
        func_141B60(p, 0x1F);
    }
}
