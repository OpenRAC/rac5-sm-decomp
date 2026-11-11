/* LEVEL_03:0x035110 -- placement copy of LEVEL_01_036ED0.c: walks the upper half of a halfword array, calling the partition helper per step. */
extern void func_035060(unsigned short *base, int index, int count, unsigned short value);

void func_035110(unsigned short *base, unsigned short *end, int unused1, int unused2)
{
    int count = end - base;
    int index;

    if (count < 2)
        return;
    index = (count - 2) / 2;
    while (1) {
        func_035060(base, index, count, base[index]);
        if (index == 0)
            return;
        index--;
    }
}
