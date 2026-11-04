extern int D_00150A6C;
extern int D_00150A68;

void func_0899C8(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_089970(void)
{
    func_0899C8(0, 0, 0x3FF, 0x3FF, 1);
    D_00150A6C &= 0xFFFFFFF7u;
    D_00150A68 |= 8u;
}
