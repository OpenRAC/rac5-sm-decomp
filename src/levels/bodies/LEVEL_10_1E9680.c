extern char D_001E8848[];
extern char D_001E84D8[];
extern char D_00212898[];
extern char D_002128B8[];

extern int func_096CB8(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_096E90(void *p);
extern void func_1E7310(void *a);
extern void func_1E7768(void *a);
extern int func_1E77D8(int a, int b);

void func_1E9680(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_096CB8(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_001E8848, 0x34, 0, -1, D_001E84D8);
    r = func_096E90(buf);
    *out1 = r;
    func_1E7310(D_00212898);
    func_1E7768(D_002128B8);
    r = func_1E77D8(a, b);
    *out2 = r;
}
