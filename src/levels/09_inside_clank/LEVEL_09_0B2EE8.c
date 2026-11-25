/* LEVEL_09:0x0B2EE8 -- placement copy of LEVEL_01_0B5C38.c: clears one entry in each of two parallel word tables. */
extern int D_001E64D0[];
extern int D_001E64D8[];

void func_0B2EE8(int index)
{
    D_001E64D0[index] = 0;
    D_001E64D8[index] = 0;
}
