/* LEVEL_17:0x18B4F0 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001B1F04;

int func_18B4F0(int value)
{
    int old = D_001B1F04;

    D_001B1F04 = value;
    return old;
}
