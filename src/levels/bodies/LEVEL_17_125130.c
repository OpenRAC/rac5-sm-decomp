extern unsigned int D_001B0AB8[];

void func_125130(unsigned int value)
{
    unsigned int index;
    for (index = 0; index < 2; ++index)
        D_001B0AB8[index] = value & 0xffu;
}
