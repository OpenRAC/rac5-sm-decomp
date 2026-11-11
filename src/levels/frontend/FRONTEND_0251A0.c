/* FRONTEND:0x0251A0 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_00105B40;

int func_0251A0(int value)
{
    int old = D_00105B40;

    D_00105B40 = value;
    return old;
}
