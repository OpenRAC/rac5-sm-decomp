extern int D_001FBDEC;
extern int D_001FBDE8;

void func_0A9100(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_0A90A8(void)
{
    func_0A9100(0, 0, 0x3FF, 0x3FF, 1);
    D_001FBDEC &= 0xFFFFFFF7u;
    D_001FBDE8 |= 8u;
}
