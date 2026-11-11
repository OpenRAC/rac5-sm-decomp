/* LEVEL_24:0x1BE798 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001DB1B8;

int func_1BE798(int value)
{
    int old = D_001DB1B8;

    D_001DB1B8 = value;
    return old;
}
