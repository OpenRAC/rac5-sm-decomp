/* LEVEL_24:0x0DCB20 -- placement copy of LEVEL_01_0E57D0.c: packs a table entry and two flags into a command word, then issues two calls. */

extern int D_00263C80[];
extern char D_000DC428[];
extern char D_000DC2B0[];

void func_08F748(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
void func_08F920(void *buf);

void func_0DCB20(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int buf[4];
    unsigned int word;
    unsigned int t;
    unsigned int u;
    unsigned int low;

    u = (b < 1);
    word = a << 27;
    t = (unsigned int)D_00263C80[c];
    u = u << 15;
    low = (b << 6) | 0x7000;
    t = t << 16;
    word = word | t;
    word = word | u;
    word = word | low;
    func_08F748(buf, word | 4, (unsigned int)D_000DC428, 0x40, 0, -1, (unsigned int)D_000DC2B0);
    func_08F920(buf);
}
