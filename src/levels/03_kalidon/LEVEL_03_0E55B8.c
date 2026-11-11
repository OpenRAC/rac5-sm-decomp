/* LEVEL_03:0x0E55B8 -- placement copy of LEVEL_01_0E57D0.c: packs a table entry and two flags into a command word, then issues two calls. */

extern int D_002B2C40[];
extern char D_000E4EC0[];
extern char D_000E4D48[];

void func_096578(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
void func_096750(void *buf);

void func_0E55B8(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int buf[4];
    unsigned int word;
    unsigned int t;
    unsigned int u;
    unsigned int low;

    u = (b < 1);
    word = a << 27;
    t = (unsigned int)D_002B2C40[c];
    u = u << 15;
    low = (b << 6) | 0x7000;
    t = t << 16;
    word = word | t;
    word = word | u;
    word = word | low;
    func_096578(buf, word | 4, (unsigned int)D_000E4EC0, 0x40, 0, -1, (unsigned int)D_000E4D48);
    func_096750(buf);
}
