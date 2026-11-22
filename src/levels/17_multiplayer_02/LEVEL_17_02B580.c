/* LEVEL_17:0x02B580 -- placement copy of LEVEL_01_02E208.c: packs six bit fields into one flag word and passes it with a local buffer to two helpers. */

void func_087F70(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
int func_088148(void *buf);
extern unsigned char D_0002A540[];

void func_02B580(unsigned int p0, unsigned int p1, unsigned int p2, unsigned int p3, unsigned int p4, unsigned int p5)
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
    func_087F70(buf, flags | 0x5, (unsigned int)D_0002A540, 0x38, 0, -1, 0);
    func_088148(buf);
}
