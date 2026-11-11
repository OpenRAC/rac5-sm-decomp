/* LEVEL_18:0x06DAD8 -- placement copy of LEVEL_16_06E3A0.c: packs six bit fields into one flag word and passes it, with a local buffer, to two helpers. */

void func_086E78(void *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
int func_087050(void *buf);
extern unsigned char D_0006BEA0[];
extern unsigned char D_0006BD38[];

int func_06DAD8(unsigned int p0, unsigned int p1, unsigned int p2, unsigned int p3, unsigned int p4, unsigned int p5)
{
    unsigned char buf[16];
    unsigned int x3;
    unsigned int x4;
    unsigned int x5;

    p1 = p1 << 27;
    p0 = p0 << 16;
    p1 = p1 | p0;
    p2 = p2 << 14;
    p1 = p1 | p2;
    x3 = p3 << 13;
    x4 = p4 << 10;
    p1 = p1 | x3;
    x4 = x4 | 0x1000;
    x5 = p5 << 6;
    p1 = p1 | x4;
    p1 = p1 | x5;
    func_086E78(buf, p1 | 5, (unsigned int)D_0006BEA0, 56, 0, -1, (unsigned int)D_0006BD38);
    return func_087050(buf);
}
