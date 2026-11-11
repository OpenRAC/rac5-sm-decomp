/* LEVEL_10:0x0E6C10 -- placement copy of LEVEL_01_0E57D0.c: packs a table entry and two flags into a command word, then issues two calls. */

extern int D_002A11C0[];
extern char D_000E6518[];
extern char D_000E63A0[];

void func_096CB8(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
void func_096E90(void *buf);

void func_0E6C10(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int buf[4];
    unsigned int word;
    unsigned int t;
    unsigned int u;
    unsigned int low;

    u = (b < 1);
    word = a << 27;
    t = (unsigned int)D_002A11C0[c];
    u = u << 15;
    low = (b << 6) | 0x7000;
    t = t << 16;
    word = word | t;
    word = word | u;
    word = word | low;
    func_096CB8(buf, word | 4, (unsigned int)D_000E6518, 0x40, 0, -1, (unsigned int)D_000E63A0);
    func_096E90(buf);
}
