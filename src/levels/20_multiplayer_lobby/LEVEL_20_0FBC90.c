/* LEVEL_20:0x0FBC90 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001205C8;

int func_0FBC90(int value)
{
    int old = D_001205C8;

    D_001205C8 = value;
    return old;
}
