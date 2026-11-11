extern int D_0015B16C;
extern int D_0015B168;

void func_097710(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_0976B8(void)
{
    func_097710(0, 0, 0x3FF, 0x3FF, 1);
    D_0015B16C &= 0xFFFFFFF7u;
    D_0015B168 |= 8u;
}
