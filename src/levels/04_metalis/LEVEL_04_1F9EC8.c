extern char D_001F9090[];
extern char D_001F8D20[];
extern char D_00223228[];
extern char D_00223248[];

extern int func_099A40(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_099C18(void *p);
extern void func_1F7B58(void *a);
extern void func_1F7FB0(void *a);
extern int func_1F8020(int a, int b);

void func_1F9EC8(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_099A40(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_001F9090, 0x34, 0, -1, D_001F8D20);
    r = func_099C18(buf);
    *out1 = r;
    func_1F7B58(D_00223228);
    func_1F7FB0(D_00223248);
    r = func_1F8020(a, b);
    *out2 = r;
}
