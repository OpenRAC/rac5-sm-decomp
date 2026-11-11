/* LEVEL_04:0x0CDCF8 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_0021A0CC;
extern void func_141B60(int *p, int a1);

void func_0CDCF8(int *p)
{
    if (D_0021A0CC == 1)
        func_141B60(p, 10);
    else
        func_141B60(p, 29);
}
