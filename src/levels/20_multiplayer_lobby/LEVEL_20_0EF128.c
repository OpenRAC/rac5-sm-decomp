/* LEVEL_20:0x0EF128 -- placement copy of LEVEL_16_11CD80.c: draws a colored label for the current table entry. */
extern int D_000FD588;
extern int D_0011AC00[];
extern int D_0011AC28[];
extern char D_00130E20[];
extern char D_002049A8[];
extern void func_081C38(int a, int b);
extern void func_0862C0(int a, int b, int c, int d, int e, int col);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_081A58(int col);
extern void func_083830(int x, int y, char *s, float sx, float sy);

void func_0EF128(void)
{
    int i = D_000FD588;
    if (D_0011AC00[i] != 0) {
        func_081C38(i, 0);
        func_0862C0(0x3A, 0x1C2, 0xEB, 0x40, 0x40, (D_0011AC00[i] << 24) | 0xFFFFFF);
        sprintf(D_002049A8, D_00130E20, D_0011AC28[i]);
        func_081A58((D_0011AC00[i] << 24) | 0xFFFFFF);
        func_083830(0x1C2, 0xF0, D_002049A8, 1.75f, 1.75f);
    }
}
