/* LEVEL_05:0x0E3240 -- placement copy of LEVEL_01_0E57D0.c: packs a table entry and two flags into a command word, then issues two calls. */

extern int D_00283C80[];
extern char D_000E2B48[];
extern char D_000E29D0[];

void func_094040(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
void func_094218(void *buf);

void func_0E3240(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int buf[4];
    unsigned int word;
    unsigned int t;
    unsigned int u;
    unsigned int low;

    u = (b < 1);
    word = a << 27;
    t = (unsigned int)D_00283C80[c];
    u = u << 15;
    low = (b << 6) | 0x7000;
    t = t << 16;
    word = word | t;
    word = word | u;
    word = word | low;
    func_094040(buf, word | 4, (unsigned int)D_000E2B48, 0x40, 0, -1, (unsigned int)D_000E29D0);
    func_094218(buf);
}
