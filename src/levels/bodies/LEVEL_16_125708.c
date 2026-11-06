extern unsigned int D_001BD4C0[];

void func_125708(unsigned int value)
{
    unsigned int index;
    for (index = 0; index < 2; ++index)
        D_001BD4C0[index] = value & 0xffu;
}
