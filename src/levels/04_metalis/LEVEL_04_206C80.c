/* LEVEL_04:0x206C80 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_00223C88;

int func_206C80(int value)
{
    int old = D_00223C88;

    D_00223C88 = value;
    return old;
}
