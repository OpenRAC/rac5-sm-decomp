/* LEVEL_18:0x11BE20 -- placement copy of LEVEL_16_11CD80.c: draws a colored label for the current table entry. */
extern int D_0019C320;
extern int D_001B99E0[];
extern int D_001B9A08[];
extern char D_001D1330[];
extern char D_002E17D0[];
extern void func_096550(int a, int b);
extern void func_09ABD8(int a, int b, int c, int d, int e, int col);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_096370(int col);
extern void func_098148(int x, int y, char *s, float sx, float sy);

void func_11BE20(void)
{
    int i = D_0019C320;
    if (D_001B99E0[i] != 0) {
        func_096550(i, 0);
        func_09ABD8(0x3A, 0x1C2, 0xEB, 0x40, 0x40, (D_001B99E0[i] << 24) | 0xFFFFFF);
        sprintf(D_002E17D0, D_001D1330, D_001B9A08[i]);
        func_096370((D_001B99E0[i] << 24) | 0xFFFFFF);
        func_098148(0x1C2, 0xF0, D_002E17D0, 1.75f, 1.75f);
    }
}
