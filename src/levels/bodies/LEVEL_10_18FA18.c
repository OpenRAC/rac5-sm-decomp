/* LEVEL_10:0x18FA18 -- packs six small fields into one word and passes it with a table pointer to two helpers. */

extern char D_0018F0C8[];
extern void func_096CB8(char *buf, unsigned int v, unsigned int tab, int n, int a4, int a5, int a6);
extern void func_096E90(char *buf);

void func_18FA18(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4,
                 unsigned int a5)
{
    char buf[16];
    unsigned int w;

    a0 <<= 27;
    a1 <<= 16;
    a0 |= a1;
    a2 <<= 15;
    a0 |= a2;
    a3 <<= 14;
    a4 <<= 10;
    a0 |= a3;
    a4 |= 0x3000;
    a5 <<= 6;
    a0 |= a4;
    w = a0 | a5;
    func_096CB8(buf, w | 0x19, (unsigned int)D_0018F0C8, 0x2C, 0, -1, 0);
    func_096E90(buf);
}
