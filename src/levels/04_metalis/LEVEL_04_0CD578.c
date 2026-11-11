/* LEVEL_04:0x0CD578 -- placement copy of LEVEL_01_0C7D60.c: picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_0021A0CC;
extern unsigned char D_0021A070;
extern int D_0021A0D4;
extern void func_141B60(int *p, int a1);

void func_0CD578(int *p)
{
    if (D_0021A0CC == 1) {
        func_141B60(p, 10);
    } else if (D_0021A070 != 0) {
        D_0021A0D4 = 0x1D;
        func_141B60(p, 0x13);
    } else {
        func_141B60(p, 0x1E);
    }
}
