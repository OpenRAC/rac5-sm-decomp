extern char D_001F1868[];
extern char D_001F14F8[];
extern char D_0021E5F0[];
extern char D_0021E610[];

extern int func_0987D0(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_0989A8(void *p);
extern void func_1EE170(void *a);
extern void func_1EE5C8(void *a);
extern int func_1EE638(int a, int b);

void func_1F26A0(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_0987D0(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_001F1868, 0x34, 0, -1, D_001F14F8);
    r = func_0989A8(buf);
    *out1 = r;
    func_1EE170(D_0021E5F0);
    func_1EE5C8(D_0021E610);
    r = func_1EE638(a, b);
    *out2 = r;
}
