extern int D_0019D3AC;
extern int D_0019D3A8;

void func_096CE8(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_096C90(void)
{
    func_096CE8(0, 0, 0x3FF, 0x3FF, 1);
    D_0019D3AC &= 0xFFFFFFF7u;
    D_0019D3A8 |= 8u;
}
