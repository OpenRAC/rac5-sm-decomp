/* LEVEL_06:0x1DB350 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001F889C;

int func_1DB350(int value)
{
    int old = D_001F889C;

    D_001F889C = value;
    return old;
}
