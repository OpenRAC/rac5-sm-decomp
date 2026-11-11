extern int D_001AB22C;
extern int D_001AB228;

void func_096800(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_0967A8(void)
{
    func_096800(0, 0, 0x3FF, 0x3FF, 1);
    D_001AB22C &= 0xFFFFFFF7u;
    D_001AB228 |= 8u;
}
