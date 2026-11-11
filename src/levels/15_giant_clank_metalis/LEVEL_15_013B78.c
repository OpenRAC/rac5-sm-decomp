extern unsigned int D_00143F10;

void func_013B78(unsigned int set, unsigned int clear)
{
    D_00143F10 = (D_00143F10 & ~clear) | set;
}
