/* LEVEL_03:0x202640 -- placement copy of LEVEL_01_1AF2E8.c: packs six bit fields into one flag word and passes it with a local buffer to two helpers. */

void func_096578(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
void func_096750(void *buf);
extern unsigned char D_00201900[];

void func_202640(unsigned int p0, unsigned int p1, unsigned int p2, unsigned int p3, unsigned int p4, unsigned int p5)
{
    unsigned int buf[4];
    unsigned int flags;
    unsigned int t;

    flags = p0 << 27;
    flags |= p1 << 16;
    flags |= p2 << 15;
    flags |= p3 << 14;
    t = (p4 << 10) | 0x3000;
    flags |= t;
    flags |= p5 << 6;
    func_096578(buf, flags | 0x21, (unsigned int)D_00201900, 20, 0, -1, 0);
    func_096750(buf);
}
