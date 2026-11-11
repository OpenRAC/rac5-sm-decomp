/* LEVEL_23:0x0D9FE8 -- placement copy of LEVEL_01_0E57D0.c: packs a table entry and two flags into a command word, then issues two calls. */

extern int D_00269200[];
extern char D_000D98F0[];
extern char D_000D9778[];

void func_08C368(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
void func_08C540(void *buf);

void func_0D9FE8(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int buf[4];
    unsigned int word;
    unsigned int t;
    unsigned int u;
    unsigned int low;

    u = (b < 1);
    word = a << 27;
    t = (unsigned int)D_00269200[c];
    u = u << 15;
    low = (b << 6) | 0x7000;
    t = t << 16;
    word = word | t;
    word = word | u;
    word = word | low;
    func_08C368(buf, word | 4, (unsigned int)D_000D98F0, 0x40, 0, -1, (unsigned int)D_000D9778);
    func_08C540(buf);
}
