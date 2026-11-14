/* LEVEL_04:0x0CDC38 -- placement copy of LEVEL_01_0C8420.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_0021A0CC;
extern int D_0021A0D4;
extern void func_141B60(int *p, int a1);

void func_0CDC38(int *p)
{
    if (D_0021A0CC == 1) {
        func_141B60(p, 0x1D);
    } else {
        D_0021A0D4 = 0x12;
        func_141B60(p, 0x13);
    }
}
