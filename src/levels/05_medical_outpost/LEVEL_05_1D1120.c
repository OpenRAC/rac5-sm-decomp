extern char D_001D02E8[];
extern char D_001CFF78[];
extern char D_001F8888[];
extern char D_001F88A8[];

extern int func_094040(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_094218(void *p);
extern void func_1CEDB0(void *a);
extern void func_1CF208(void *a);
extern int func_1CF278(int a, int b);

void func_1D1120(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_094040(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_001D02E8, 0x34, 0, -1, D_001CFF78);
    r = func_094218(buf);
    *out1 = r;
    func_1CEDB0(D_001F8888);
    func_1CF208(D_001F88A8);
    r = func_1CF278(a, b);
    *out2 = r;
}
