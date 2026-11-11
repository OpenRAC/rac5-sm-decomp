extern int D_001EB16C;
extern int D_001EB168;

void func_0A76C0(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_0A7668(void)
{
    func_0A76C0(0, 0, 0x3FF, 0x3FF, 1);
    D_001EB16C &= 0xFFFFFFF7u;
    D_001EB168 |= 8u;
}
