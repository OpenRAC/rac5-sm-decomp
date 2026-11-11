/* LEVEL_24:0x1BD0F0 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001DAE24;

int func_1BD0F0(int value)
{
    int old = D_001DAE24;

    D_001DAE24 = value;
    return old;
}
