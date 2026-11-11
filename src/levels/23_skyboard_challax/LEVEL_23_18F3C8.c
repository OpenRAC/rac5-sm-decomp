/* LEVEL_23:0x18F3C8 -- placement copy of LEVEL_01_1AFBB8.c: packs six small fields into one word and passes it with a table pointer to two helpers. */

extern char D_0018ECD8[];
extern void func_08C368(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern void func_08C540(char *buf);

void func_18F3C8(int a, int b, int c, int d, int e, int f)
{
    char buf[16];
    unsigned int v;
    unsigned int t;

    v = (a << 27) | (b << 16);
    v = v | (c << 15);
    v = v | (d << 14);
    t = (e << 10) | 0x2000;
    v = v | t;
    v = v | (f << 6);
    v = v | 0x21;
    func_08C368((unsigned int *)buf, v, (unsigned int)D_0018ECD8, 0x14, 0, -1, 0);
    func_08C540(buf);
}
