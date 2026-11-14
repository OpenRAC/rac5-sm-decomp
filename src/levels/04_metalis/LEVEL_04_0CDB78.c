/* LEVEL_04:0x0CDB78 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_0021A0CC;
extern int D_0021A0D4;
extern void func_141B60(int *p, int a1);

void func_0CDB78(int *p)
{
    if (D_0021A0CC == 1) {
        func_141B60(p, 0x1D);
    } else {
        D_0021A0D4 = 0x11;
        func_141B60(p, 0x13);
    }
}
