/* LEVEL_06:0x0B0460 -- placement copy of LEVEL_01_0B5C38.c: clears one entry in each of two parallel word tables. */
extern int D_001EB5D0[];
extern int D_001EB5D8[];

void func_0B0460(int index)
{
    D_001EB5D0[index] = 0;
    D_001EB5D8[index] = 0;
}
