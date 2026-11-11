extern char D_00142C20[];
extern char D_001428B0[];
extern char D_00166FD0[];
extern char D_00166FF0[];

extern int func_087718(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_0878F0(void *p);
extern void func_1416E8(void *a);
extern void func_141B40(void *a);
extern int func_141BB0(int a, int b);

void func_143A58(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_087718(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_00142C20, 0x34, 0, -1, D_001428B0);
    r = func_0878F0(buf);
    *out1 = r;
    func_1416E8(D_00166FD0);
    func_141B40(D_00166FF0);
    r = func_141BB0(a, b);
    *out2 = r;
}
