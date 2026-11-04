extern int D_00244CAC;
extern int D_00244CA8;

void func_0B3A38(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_0B39E0(void)
{
    func_0B3A38(0, 0, 0x3FF, 0x3FF, 1);
    D_00244CAC &= 0xFFFFFFF7u;
    D_00244CA8 |= 8u;
}
