/* LEVEL_16:0x199560 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001BF3B8;

int func_199560(int value)
{
    int old = D_001BF3B8;

    D_001BF3B8 = value;
    return old;
}
