/* LEVEL_06:0x016B60 -- placement copy of LEVEL_03_0180C0.c: sets one bit in one global word and clears it in the other, with the roles chosen by the flag. */
extern unsigned int D_001DE2C4;
extern unsigned int D_001DE2C8;

void func_016B60(int a0, int a1)
{
    unsigned int m;

    m = 1u << a0;
    if (a1 != 0) {
        D_001DE2C8 |= m;
        D_001DE2C4 &= ~m;
    } else {
        D_001DE2C4 |= m;
        D_001DE2C8 &= ~m;
    }
}
