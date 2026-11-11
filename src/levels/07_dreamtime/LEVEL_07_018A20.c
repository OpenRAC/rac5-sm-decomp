/* LEVEL_07:0x018A20 -- placement copy of LEVEL_03_0180C0.c: sets one bit in one global word and clears it in the other, with the roles chosen by the flag. */
extern unsigned int D_002036C4;
extern unsigned int D_002036C8;

void func_018A20(int a0, int a1)
{
    unsigned int m;

    m = 1u << a0;
    if (a1 != 0) {
        D_002036C8 |= m;
        D_002036C4 &= ~m;
    } else {
        D_002036C4 |= m;
        D_002036C8 &= ~m;
    }
}
