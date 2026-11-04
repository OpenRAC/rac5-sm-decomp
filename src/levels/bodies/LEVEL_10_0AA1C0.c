extern int D_00204DEC;
extern int D_00204DE8;

void func_0AA218(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_0AA1C0(void)
{
    func_0AA218(0, 0, 0x3FF, 0x3FF, 1);
    D_00204DEC &= 0xFFFFFFF7u;
    D_00204DE8 |= 8u;
}
