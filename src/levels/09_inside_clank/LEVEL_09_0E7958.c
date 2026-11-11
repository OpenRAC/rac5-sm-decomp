/* LEVEL_09:0x0E7958 -- placement copy of LEVEL_01_0EBA78.c: packs five fields into one word and passes it with a constant table to two helpers. */

extern char D_000E6D80[];
extern void func_0930A0(unsigned int *buf, unsigned int v, unsigned int tbl, int n, int a, int b, unsigned int c);
extern void func_093278(unsigned int *buf);

void func_0E7958(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0)
{
    unsigned int buf[4];
    unsigned int x3;
    unsigned int x4;

    a1 = a1 << 15;
    a1 = a1 | 0x7FD0000;
    a0 = a0 << 27;
    a0 = a0 | a1;
    a2 = a2 << 14;
    x3 = a3 << 10;
    a0 = a0 | a2;
    x3 = x3 | 0x2000;
    x4 = t0 << 6;
    a0 = a0 | x3;
    a0 = a0 | x4;
    func_0930A0(buf, a0 | 5, (unsigned int)D_000E6D80, 0x24, 0, -1, 0);
    func_093278(buf);
}
