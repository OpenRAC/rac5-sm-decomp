/* LEVEL_04:0x0CDE58 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_0021A0CC;
extern void func_141B60(int *p, int a1);

void func_0CDE58(int *p)
{
    if (D_0021A0CC == 1) {
        func_141B60(p, 8);
    } else {
        func_141B60(p, 0x1D);
    }
}
