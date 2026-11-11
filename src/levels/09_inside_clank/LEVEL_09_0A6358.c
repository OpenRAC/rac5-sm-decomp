extern int D_001E5BEC;
extern int D_001E5BE8;

void func_0A63B0(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_0A6358(void)
{
    func_0A63B0(0, 0, 0x3FF, 0x3FF, 1);
    D_001E5BEC &= 0xFFFFFFF7u;
    D_001E5BE8 |= 8u;
}
