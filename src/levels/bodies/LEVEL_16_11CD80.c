/* LEVEL_16:0x11CD80 -- draws a colored label for the current table entry. */
extern int D_0019AEA0;
extern int D_001B8560[];
extern int D_001B8588[];
extern char D_001CFDB0[];
extern char D_002E1450[];
extern void func_097540(int a, int b);
extern void func_09BBC8(int a, int b, int c, int d, int e, int col);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_097360(int col);
extern void func_099138(int x, int y, char *s, float sx, float sy);

void func_11CD80(void)
{
    int i = D_0019AEA0;
    if (D_001B8560[i] != 0) {
        func_097540(i, 0);
        func_09BBC8(0x3A, 0x1C2, 0xEB, 0x40, 0x40, (D_001B8560[i] << 24) | 0xFFFFFF);
        sprintf(D_002E1450, D_001CFDB0, D_001B8588[i]);
        func_097360((D_001B8560[i] << 24) | 0xFFFFFF);
        func_099138(0x1C2, 0xF0, D_002E1450, 1.75f, 1.75f);
    }
}
