/* LEVEL_08:0x0F07A0 -- placement copy of LEVEL_01_0E57D0.c: packs a table entry and two flags into a command word, then issues two calls. */

extern int D_002E7040[];
extern char D_000F00A8[];
extern char D_000EFF30[];

void func_09E868(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
void func_09EA40(void *buf);

void func_0F07A0(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int buf[4];
    unsigned int word;
    unsigned int t;
    unsigned int u;
    unsigned int low;

    u = (b < 1);
    word = a << 27;
    t = (unsigned int)D_002E7040[c];
    u = u << 15;
    low = (b << 6) | 0x7000;
    t = t << 16;
    word = word | t;
    word = word | u;
    word = word | low;
    func_09E868(buf, word | 4, (unsigned int)D_000F00A8, 0x40, 0, -1, (unsigned int)D_000EFF30);
    func_09EA40(buf);
}
