/* LEVEL_06:0x1DCA08 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001F9228;

int func_1DCA08(int value)
{
    int old = D_001F9228;

    D_001F9228 = value;
    return old;
}
