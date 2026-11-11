/* LEVEL_23:0x1BF848 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001DCC54;

int func_1BF848(int value)
{
    int old = D_001DCC54;

    D_001DCC54 = value;
    return old;
}
