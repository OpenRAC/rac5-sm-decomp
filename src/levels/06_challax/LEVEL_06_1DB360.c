/* LEVEL_06:0x1DB360 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001F8E94;

int func_1DB360(int value)
{
    int old = D_001F8E94;

    D_001F8E94 = value;
    return old;
}
