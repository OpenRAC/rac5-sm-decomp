/* LEVEL_03:0x0180C0 -- sets one bit in one global word and clears it in the other, with the roles chosen by the flag. */
extern unsigned int D_00207A44;
extern unsigned int D_00207A48;

void func_0180C0(int a0, int a1)
{
    unsigned int m;

    m = 1u << a0;
    if (a1 != 0) {
        D_00207A48 |= m;
        D_00207A44 &= ~m;
    } else {
        D_00207A44 |= m;
        D_00207A48 &= ~m;
    }
}
