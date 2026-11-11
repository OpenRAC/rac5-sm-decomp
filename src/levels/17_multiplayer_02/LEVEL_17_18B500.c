/* LEVEL_17:0x18B500 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001B24FC;

int func_18B500(int value)
{
    int old = D_001B24FC;

    D_001B24FC = value;
    return old;
}
