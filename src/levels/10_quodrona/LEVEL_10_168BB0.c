/* LEVEL_10:0x168BB0 -- packs six small fields into one control word with a low tag, passes it with a table to a helper on a local buffer, then runs a second helper on the buffer. */

extern unsigned char D_00167D60[];

void func_096CB8(unsigned char *buf, unsigned int mask, unsigned char *tbl, int n, int a, int b, unsigned char *c);
void func_096E90(unsigned char *buf);

void func_168BB0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1)
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
    x4 = t0 << 10;
    a0 = a0 | x3;
    x4 = x4 | 0x3000;
    x5 = t1 << 6;
    a0 = a0 | x4;
    a0 = a0 | x5;
    func_096CB8(buf, a0 | 5, D_00167D60, 0x40, 0, -1, 0);
    func_096E90(buf);
}
