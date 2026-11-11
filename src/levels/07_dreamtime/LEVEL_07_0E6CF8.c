/* LEVEL_07:0x0E6CF8 -- placement copy of LEVEL_01_0E57D0.c: packs a table entry and two flags into a command word, then issues two calls. */

extern int D_002AD6C0[];
extern char D_000E6600[];
extern char D_000E6488[];

void func_0987D0(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
void func_0989A8(void *buf);

void func_0E6CF8(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int buf[4];
    unsigned int word;
    unsigned int t;
    unsigned int u;
    unsigned int low;

    u = (b < 1);
    word = a << 27;
    t = (unsigned int)D_002AD6C0[c];
    u = u << 15;
    low = (b << 6) | 0x7000;
    t = t << 16;
    word = word | t;
    word = word | u;
    word = word | low;
    func_0987D0(buf, word | 4, (unsigned int)D_000E6600, 0x40, 0, -1, (unsigned int)D_000E6488);
    func_0989A8(buf);
}
