/* LEVEL_15:0x141110 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_0015E9CC;

int func_141110(int value)
{
    int old = D_0015E9CC;

    D_0015E9CC = value;
    return old;
}
