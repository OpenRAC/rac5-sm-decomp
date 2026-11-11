/* LEVEL_16:0x0D9DE0 -- placement copy of LEVEL_01_0ED068.c: packs seven small fields into one control word with a low tag, passes it with two tables to a helper on a local buffer, then runs a second helper on the buffer. */

extern unsigned char D_000D95D8[];
extern unsigned char D_000D9548[];

void func_087530(unsigned char *buf, unsigned int mask, unsigned int tbl, int n, int a, int b, unsigned int c);
void func_087708(unsigned char *buf);

void func_0D9DE0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1,
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
    func_087530(buf, a0 | 0x21, (unsigned int)D_000D95D8, 0x24, 0, -1, (unsigned int)D_000D9548);
    func_087708(buf);
}
