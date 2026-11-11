/* LEVEL_23:0x1BF858 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001DD24C;

int func_1BF858(int value)
{
    int old = D_001DD24C;

    D_001DD24C = value;
    return old;
}
