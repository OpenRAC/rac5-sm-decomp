/* LEVEL_23:0x0DFF50 -- placement copy of LEVEL_01_0ED068.c: packs seven small fields into one control word with a low tag, passes it with two tables to a helper on a local buffer, then runs a second helper on the buffer. */

extern unsigned char D_000DEE70[];
extern unsigned char D_000DEDE0[];

void func_08C368(unsigned char *buf, unsigned int mask, unsigned int tbl, int n, int a, int b, unsigned int c);
void func_08C540(unsigned char *buf);

void func_0DFF50(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1,
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
    func_08C368(buf, a0 | 0x21, (unsigned int)D_000DEE70, 0x24, 0, -1, (unsigned int)D_000DEDE0);
    func_08C540(buf);
}
