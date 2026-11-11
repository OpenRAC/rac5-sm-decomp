extern unsigned int D_0011FB60[];

void func_0F77D0(unsigned int value)
{
    unsigned int index;
    for (index = 0; index < 2; ++index)
        D_0011FB60[index] = value & 0xffu;
}
