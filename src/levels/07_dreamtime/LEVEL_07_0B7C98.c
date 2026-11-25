/* LEVEL_07:0x0B7C98 -- placement copy of LEVEL_01_0B5C38.c: clears one entry in each of two parallel word tables. */
extern int D_002109D0[];
extern int D_002109D8[];

void func_0B7C98(int index)
{
    D_002109D0[index] = 0;
    D_002109D8[index] = 0;
}
