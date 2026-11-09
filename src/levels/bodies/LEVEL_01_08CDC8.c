/* LEVEL_01:0x08CDC8 -- copies one global word into another. */
extern int D_001F6358;
extern int D_001F6350;

int func_08CDC8(void)
{
    return D_001F6358 = D_001F6350;
}
