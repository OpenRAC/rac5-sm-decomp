/* LEVEL_18:0x0A3C58 -- placement copy of LEVEL_01_0B5C38.c: clears one entry in each of two parallel word tables. */
extern int D_001ABBD0[];
extern int D_001ABBD8[];

void func_0A3C58(int index)
{
    D_001ABBD0[index] = 0;
    D_001ABBD8[index] = 0;
}
