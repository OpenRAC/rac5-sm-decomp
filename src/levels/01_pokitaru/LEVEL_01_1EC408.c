/* LEVEL_01:0x1EC408 -- swaps a global word: stores the new value and returns the old one. */
extern int D_002099E4;

int func_1EC408(int value)
{
    int old = D_002099E4;

    D_002099E4 = value;
    return old;
}
