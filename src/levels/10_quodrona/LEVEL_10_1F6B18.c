/* LEVEL_10:0x1F6B18 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_002132F8;

int func_1F6B18(int value)
{
    int old = D_002132F8;

    D_002132F8 = value;
    return old;
}
