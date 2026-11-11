/* LEVEL_04:0x0CD7F8 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_0021A0CC;
extern unsigned char D_0021A070;
extern int D_0021A0D4;
extern void func_141B60(int *p, int a1);

void func_0CD7F8(int *p)
{
    if (D_0021A0CC == 1) {
        func_141B60(p, 12);
    } else if (D_0021A070 != 0) {
        D_0021A0D4 = 29;
        func_141B60(p, 19);
    } else {
        func_141B60(p, 30);
    }
}
