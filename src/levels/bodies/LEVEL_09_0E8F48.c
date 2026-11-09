/* LEVEL_09:0x0E8F48 -- placement copy of LEVEL_01_0ED068.c: packs seven small fields into one control word with a low tag, passes it with two tables to a helper on a local buffer, then runs a second helper on the buffer. */

extern unsigned char D_000E7E68[];
extern unsigned char D_000E7DD8[];

void func_0930A0(unsigned char *buf, unsigned int mask, unsigned int tbl, int n, int a, int b, unsigned int c);
void func_093278(unsigned char *buf);

void func_0E8F48(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1,
                 unsigned int t2)
{
    unsigned char buf[16];
    unsigned int x3;
    unsigned int x4;
    unsigned int x5;

    a0 = a0 << 27;
    a1 = a1 << 16;
    a0 = a0 | a1;
    a2 = a2 << 15;
    a0 = a0 | a2;
    x3 = a3 << 14;
    x4 = t0 << 13;
    a0 = a0 | x3;
    x5 = t1 << 10;
    a0 = a0 | x4;
    a0 = a0 | x5;
    t2 = t2 << 6;
    a0 = a0 | t2;
    func_0930A0(buf, a0 | 0x21, (unsigned int)D_000E7E68, 0x24, 0, -1, (unsigned int)D_000E7DD8);
    func_093278(buf);
}
