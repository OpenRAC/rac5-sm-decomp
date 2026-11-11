extern int D_001A9DAC;
extern int D_001A9DA8;

void func_0977F0(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_097798(void)
{
    func_0977F0(0, 0, 0x3FF, 0x3FF, 1);
    D_001A9DAC &= 0xFFFFFFF7u;
    D_001A9DA8 |= 8u;
}
