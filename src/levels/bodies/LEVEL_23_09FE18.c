extern int D_001CF1EC;
extern int D_001CF1E8;

void func_09FE70(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_09FE18(void)
{
    func_09FE70(0, 0, 0x3FF, 0x3FF, 1);
    D_001CF1EC &= 0xFFFFFFF7u;
    D_001CF1E8 |= 8u;
}
