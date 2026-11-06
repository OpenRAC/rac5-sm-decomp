extern char D_001F5B88[];
extern char D_001F5818[];
extern char D_0021E860[];
extern char D_0021E880[];

extern int func_09D018(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_09D1F0(void *p);
extern void func_1F4650(void *a);
extern void func_1F4AA8(void *a);
extern int func_1F4B18(int a, int b);

void func_1F69C0(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_09D018(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_001F5B88, 0x34, 0, -1, D_001F5818);
    r = func_09D1F0(buf);
    *out1 = r;
    func_1F4650(D_0021E860);
    func_1F4AA8(D_0021E880);
    r = func_1F4B18(a, b);
    *out2 = r;
}
