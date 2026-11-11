extern char D_00192730[];
extern char D_001923C0[];
extern char D_001BFB90[];
extern char D_001BFBB0[];

extern int func_0879E0(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_087BB8(void *p);
extern void func_1911F8(void *a);
extern void func_191650(void *a);
extern int func_1916C0(int a, int b);

void func_193568(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_0879E0(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_00192730, 0x34, 0, -1, D_001923C0);
    r = func_087BB8(buf);
    *out1 = r;
    func_1911F8(D_001BFB90);
    func_191650(D_001BFBB0);
    r = func_1916C0(a, b);
    *out2 = r;
}
