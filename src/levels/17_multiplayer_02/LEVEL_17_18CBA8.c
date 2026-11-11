/* LEVEL_17:0x18CBA8 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001B2890;

int func_18CBA8(int value)
{
    int old = D_001B2890;

    D_001B2890 = value;
    return old;
}
