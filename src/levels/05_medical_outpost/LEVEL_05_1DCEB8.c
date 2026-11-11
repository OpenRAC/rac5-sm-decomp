/* LEVEL_05:0x1DCEB8 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001F92E8;

int func_1DCEB8(int value)
{
    int old = D_001F92E8;

    D_001F92E8 = value;
    return old;
}
