/* LEVEL_01:0x1AFBB8 -- packs six small fields into one word and passes it with a table pointer to two helpers. */

extern char D_001AF4C8[];
extern void func_096948(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern void func_096B20(char *buf);

void func_1AFBB8(int a, int b, int c, int d, int e, int f)
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
    func_096948((unsigned int *)buf, v, (unsigned int)D_001AF4C8, 0x14, 0, -1, 0);
    func_096B20(buf);
}
