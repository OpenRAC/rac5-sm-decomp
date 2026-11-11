/* LEVEL_19:0x06E478 -- placement copy of LEVEL_16_06E3A0.c: packs six bit fields into one flag word and passes it, with a local buffer, to two helpers. */

void func_0879E0(void *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
int func_087BB8(void *buf);
extern unsigned char D_0006C840[];
extern unsigned char D_0006C6D8[];

int func_06E478(unsigned int p0, unsigned int p1, unsigned int p2, unsigned int p3, unsigned int p4, unsigned int p5)
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
    func_0879E0(buf, p1 | 5, (unsigned int)D_0006C840, 56, 0, -1, (unsigned int)D_0006C6D8);
    return func_087BB8(buf);
}
