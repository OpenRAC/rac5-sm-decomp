extern char D_001E0EF0[];
extern char D_001E0B80[];
extern char D_00209910[];
extern char D_00209930[];

extern int func_096948(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_096B20(void *p);
extern void func_1DF9B8(void *a);
extern void func_1DFE10(void *a);
extern int func_1DFE80(int a, int b);

void func_1E1D28(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_096948(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_001E0EF0, 0x34, 0, -1, D_001E0B80);
    r = func_096B20(buf);
    *out1 = r;
    func_1DF9B8(D_00209910);
    func_1DFE10(D_00209930);
    r = func_1DFE80(a, b);
    *out2 = r;
}
