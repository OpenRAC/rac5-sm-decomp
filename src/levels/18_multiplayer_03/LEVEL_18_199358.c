/* LEVEL_18:0x199358 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001C05E4;

int func_199358(int value)
{
    int old = D_001C05E4;

    D_001C05E4 = value;
    return old;
}
