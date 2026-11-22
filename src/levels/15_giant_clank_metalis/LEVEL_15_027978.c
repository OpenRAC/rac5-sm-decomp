/* LEVEL_15:0x027978 -- placement copy of LEVEL_01_02E208.c: packs six bit fields into one flag word and passes it with a local buffer to two helpers. */

void func_07A808(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
int func_07A9E0(void *buf);
extern unsigned char D_00026938[];

void func_027978(unsigned int p0, unsigned int p1, unsigned int p2, unsigned int p3, unsigned int p4, unsigned int p5)
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
    func_07A808(buf, flags | 0x5, (unsigned int)D_00026938, 0x38, 0, -1, 0);
    func_07A9E0(buf);
}
