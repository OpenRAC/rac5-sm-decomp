extern int D_0010C48C;
extern int D_0010C488;

void func_081EE8(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_081E90(void)
{
    func_081EE8(0, 0, 0x3FF, 0x3FF, 1);
    D_0010C48C &= 0xFFFFFFF7u;
    D_0010C488 |= 8u;
}
