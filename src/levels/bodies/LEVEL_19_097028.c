extern int D_001AAF2C;
extern int D_001AAF28;

void func_097080(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_097028(void)
{
    func_097080(0, 0, 0x3FF, 0x3FF, 1);
    D_001AAF2C &= 0xFFFFFFF7u;
    D_001AAF28 |= 8u;
}
