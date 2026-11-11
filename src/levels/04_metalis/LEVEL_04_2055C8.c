/* LEVEL_04:0x2055C8 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_002232FC;

int func_2055C8(int value)
{
    int old = D_002232FC;

    D_002232FC = value;
    return old;
}
