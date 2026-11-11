/* LEVEL_19:0x199080 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001C024C;

int func_199080(int value)
{
    int old = D_001C024C;

    D_001C024C = value;
    return old;
}
