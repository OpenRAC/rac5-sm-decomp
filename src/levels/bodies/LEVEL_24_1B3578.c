extern char D_001B2740[];
extern char D_001B23D0[];
extern char D_001DA758[];
extern char D_001DA778[];

extern int func_08F748(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_08F920(void *p);
extern void func_1B1208(void *a);
extern void func_1B1660(void *a);
extern int func_1B16D0(int a, int b);

void func_1B3578(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_08F748(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_001B2740, 0x34, 0, -1, D_001B23D0);
    r = func_08F920(buf);
    *out1 = r;
    func_1B1208(D_001DA758);
    func_1B1660(D_001DA778);
    r = func_1B16D0(a, b);
    *out2 = r;
}
