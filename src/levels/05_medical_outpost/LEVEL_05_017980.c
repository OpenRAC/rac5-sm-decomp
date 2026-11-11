/* LEVEL_05:0x017980 -- placement copy of LEVEL_03_0180C0.c: sets one bit in one global word and clears it in the other, with the roles chosen by the flag. */
extern unsigned int D_001DE744;
extern unsigned int D_001DE748;

void func_017980(int a0, int a1)
{
    unsigned int m;

    m = 1u << a0;
    if (a1 != 0) {
        D_001DE748 |= m;
        D_001DE744 &= ~m;
    } else {
        D_001DE744 |= m;
        D_001DE748 &= ~m;
    }
}
