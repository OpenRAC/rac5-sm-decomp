/* LEVEL_05:0x1DB810 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001F8F54;

int func_1DB810(int value)
{
    int old = D_001F8F54;

    D_001F8F54 = value;
    return old;
}
