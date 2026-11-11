/* LEVEL_01:0x0E57D0 -- packs a table entry and two flags into a command word, then issues two calls. */

extern int D_00297DC0[];
extern char D_000E50D8[];
extern char D_000E4F60[];

void func_096948(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
void func_096B20(void *buf);

void func_0E57D0(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int buf[4];
    unsigned int word;
    unsigned int t;
    unsigned int u;
    unsigned int low;

    u = (b < 1);
    word = a << 27;
    t = (unsigned int)D_00297DC0[c];
    u = u << 15;
    low = (b << 6) | 0x7000;
    t = t << 16;
    word = word | t;
    word = word | u;
    word = word | low;
    func_096948(buf, word | 4, (unsigned int)D_000E50D8, 0x40, 0, -1, (unsigned int)D_000E4F60);
    func_096B20(buf);
}
