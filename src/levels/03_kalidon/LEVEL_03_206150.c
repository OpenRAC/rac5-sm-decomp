/* LEVEL_03:0x206150 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_00223248;

int func_206150(int value)
{
    int old = D_00223248;

    D_00223248 = value;
    return old;
}
