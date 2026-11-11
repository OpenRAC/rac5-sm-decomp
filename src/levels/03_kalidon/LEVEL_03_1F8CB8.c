extern char D_001F7E80[];
extern char D_001F7B10[];
extern char D_002227E8[];
extern char D_00222808[];

extern int func_096578(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_096750(void *p);
extern void func_1F4788(void *a);
extern void func_1F4BE0(void *a);
extern int func_1F4C50(int a, int b);

void func_1F8CB8(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_096578(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_001F7E80, 0x34, 0, -1, D_001F7B10);
    r = func_096750(buf);
    *out1 = r;
    func_1F4788(D_002227E8);
    func_1F4BE0(D_00222808);
    r = func_1F4C50(a, b);
    *out2 = r;
}
