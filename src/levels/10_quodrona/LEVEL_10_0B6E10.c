/* LEVEL_10:0x0B6E10 -- placement copy of LEVEL_01_0B5C38.c: clears one entry in each of two parallel word tables. */
extern int D_002056D0[];
extern int D_002056D8[];

void func_0B6E10(int index)
{
    D_002056D0[index] = 0;
    D_002056D8[index] = 0;
}
