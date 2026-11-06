extern unsigned int D_001BE940[];

void func_1247C0(unsigned int value)
{
    unsigned int index;
    for (index = 0; index < 2; ++index)
        D_001BE940[index] = value & 0xffu;
}
