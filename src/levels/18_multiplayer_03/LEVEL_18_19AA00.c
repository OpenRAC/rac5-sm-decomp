/* LEVEL_18:0x19AA00 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001C0978;

int func_19AA00(int value)
{
    int old = D_001C0978;

    D_001C0978 = value;
    return old;
}
