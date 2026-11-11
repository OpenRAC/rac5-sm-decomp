/* LEVEL_16:0x197EA8 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001BEA2C;

int func_197EA8(int value)
{
    int old = D_001BEA2C;

    D_001BEA2C = value;
    return old;
}
