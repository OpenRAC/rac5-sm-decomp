/* LEVEL_19:0x19A728 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001C05E0;

int func_19A728(int value)
{
    int old = D_001C05E0;

    D_001C05E0 = value;
    return old;
}
