extern char D_00192418[];
extern char D_001920A8[];
extern char D_001BE968[];
extern char D_001BE988[];

extern int func_087530(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_087708(void *p);
extern void func_190EE0(void *a);
extern void func_191338(void *a);
extern int func_1913A8(int a, int b);

void func_193250(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_087530(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_00192418, 0x34, 0, -1, D_001920A8);
    r = func_087708(buf);
    *out1 = r;
    func_190EE0(D_001BE968);
    func_191338(D_001BE988);
    r = func_1913A8(a, b);
    *out2 = r;
}
