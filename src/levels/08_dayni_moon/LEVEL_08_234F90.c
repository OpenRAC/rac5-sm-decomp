/* LEVEL_08:0x234F90 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_0025352C;

int func_234F90(int value)
{
    int old = D_0025352C;

    D_0025352C = value;
    return old;
}
