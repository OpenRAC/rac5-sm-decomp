extern int D_001EACEC;
extern int D_001EACE8;

void func_0A38D0(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_0A3878(void)
{
    func_0A38D0(0, 0, 0x3FF, 0x3FF, 1);
    D_001EACEC &= 0xFFFFFFF7u;
    D_001EACE8 |= 8u;
}
