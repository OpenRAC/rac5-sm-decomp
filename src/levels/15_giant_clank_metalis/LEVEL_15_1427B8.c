/* LEVEL_15:0x1427B8 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_0015ED60;

int func_1427B8(int value)
{
    int old = D_0015ED60;

    D_0015ED60 = value;
    return old;
}
