/* LEVEL_19:0x11D6F0 -- placement copy of LEVEL_16_11CD80.c: draws a colored label for the current table entry. */
extern int D_0019C020;
extern int D_001B96D8[];
extern int D_001B9700[];
extern char D_001D0FB0[];
extern char D_002E15D0[];
extern void func_096DD0(int a, int b);
extern void func_09B458(int a, int b, int c, int d, int e, int col);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_096BF0(int col);
extern void func_0989C8(int x, int y, char *s, float sx, float sy);

void func_11D6F0(void)
{
    int i = D_0019C020;
    if (D_001B96D8[i] != 0) {
        func_096DD0(i, 0);
        func_09B458(0x3A, 0x1C2, 0xEB, 0x40, 0x40, (D_001B96D8[i] << 24) | 0xFFFFFF);
        sprintf(D_002E15D0, D_001D0FB0, D_001B9700[i]);
        func_096BF0((D_001B96D8[i] << 24) | 0xFFFFFF);
        func_0989C8(0x1C2, 0xF0, D_002E15D0, 1.75f, 1.75f);
    }
}
