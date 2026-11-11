/* LEVEL_17:0x11C6F8 -- placement copy of LEVEL_16_11CD80.c: draws a colored label for the current table entry. */
extern int D_0018E4A0;
extern int D_001ABB58[];
extern int D_001ABB80[];
extern char D_001C3230[];
extern char D_002D2750[];
extern void func_096A38(int a, int b);
extern void func_09B0C0(int a, int b, int c, int d, int e, int col);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_096858(int col);
extern void func_098630(int x, int y, char *s, float sx, float sy);

void func_11C6F8(void)
{
    int i = D_0018E4A0;
    if (D_001ABB58[i] != 0) {
        func_096A38(i, 0);
        func_09B0C0(0x3A, 0x1C2, 0xEB, 0x40, 0x40, (D_001ABB58[i] << 24) | 0xFFFFFF);
        sprintf(D_002D2750, D_001C3230, D_001ABB80[i]);
        func_096858((D_001ABB58[i] << 24) | 0xFFFFFF);
        func_098630(0x1C2, 0xF0, D_002D2750, 1.75f, 1.75f);
    }
}
