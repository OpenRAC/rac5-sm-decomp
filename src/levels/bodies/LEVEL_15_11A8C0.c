/* LEVEL_15:0x11A8C0 -- clears a few low status bits of a word, sets bit 2, then runs two helpers on a local buffer. */

extern unsigned char D_00119BA8[];

void func_07A808(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
void func_07A9E0(unsigned char *buf);

void func_11A8C0(unsigned int x)
{
    unsigned char buf[16];
    unsigned int m;

    m = (x & 0xFFFFFFC3) | 0x4;
    func_07A808((unsigned int *)buf, m & 0xFFFFFFFC, (unsigned int)D_00119BA8, 0x38, 0, -1, 0);
    func_07A9E0(buf);
}
