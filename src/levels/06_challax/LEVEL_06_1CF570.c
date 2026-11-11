extern char D_001CE738[];
extern char D_001CE3C8[];
extern char D_001F87C8[];
extern char D_001F87E8[];

extern int func_08F598(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_08F770(void *p);
extern void func_1CD200(void *a);
extern void func_1CD658(void *a);
extern int func_1CD6C8(int a, int b);

void func_1CF570(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_08F598(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_001CE738, 0x34, 0, -1, D_001CE3C8);
    r = func_08F770(buf);
    *out1 = r;
    func_1CD200(D_001F87C8);
    func_1CD658(D_001F87E8);
    r = func_1CD6C8(a, b);
    *out2 = r;
}
