extern unsigned int D_001BE638[];

void func_126070(unsigned int value)
{
    unsigned int index;
    for (index = 0; index < 2; ++index)
        D_001BE638[index] = value & 0xffu;
}
