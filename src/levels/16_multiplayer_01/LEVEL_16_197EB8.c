/* LEVEL_16:0x197EB8 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001BF024;

int func_197EB8(int value)
{
    int old = D_001BF024;

    D_001BF024 = value;
    return old;
}
