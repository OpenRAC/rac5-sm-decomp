/* LEVEL_07:0x201E38 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_0021F050;

int func_201E38(int value)
{
    int old = D_0021F050;

    D_0021F050 = value;
    return old;
}
