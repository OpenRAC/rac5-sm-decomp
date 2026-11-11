/* LEVEL_05:0x1DB800 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001F895C;

int func_1DB800(int value)
{
    int old = D_001F895C;

    D_001F895C = value;
    return old;
}
