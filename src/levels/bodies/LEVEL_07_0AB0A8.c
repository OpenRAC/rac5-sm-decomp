extern int D_002100EC;
extern int D_002100E8;

void func_0AB100(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_0AB0A8(void)
{
    func_0AB100(0, 0, 0x3FF, 0x3FF, 1);
    D_002100EC &= 0xFFFFFFF7u;
    D_002100E8 |= 8u;
}
