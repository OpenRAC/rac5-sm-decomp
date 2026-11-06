extern char D_001C9658[];
extern char D_001C92E8[];
extern char D_001F3590[];
extern char D_001F35B0[];

extern int func_0930A0(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_093278(void *p);
extern void func_1C8120(void *a);
extern void func_1C8578(void *a);
extern int func_1C85E8(int a, int b);

void func_1CA490(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_0930A0(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_001C9658, 0x34, 0, -1, D_001C92E8);
    r = func_093278(buf);
    *out1 = r;
    func_1C8120(D_001F3590);
    func_1C8578(D_001F35B0);
    r = func_1C85E8(a, b);
    *out2 = r;
}
