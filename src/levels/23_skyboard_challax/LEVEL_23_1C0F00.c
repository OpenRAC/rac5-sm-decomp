/* LEVEL_23:0x1C0F00 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001DD5E0;

int func_1C0F00(int value)
{
    int old = D_001DD5E0;

    D_001DD5E0 = value;
    return old;
}
