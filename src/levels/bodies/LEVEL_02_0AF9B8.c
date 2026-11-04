extern int D_00210DAC;
extern int D_00210DA8;

void func_0AFA10(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_0AF9B8(void)
{
    func_0AFA10(0, 0, 0x3FF, 0x3FF, 1);
    D_00210DAC &= 0xFFFFFFF7u;
    D_00210DA8 |= 8u;
}
