/* LEVEL_19:0x0A44D8 -- placement copy of LEVEL_01_0B5C38.c: clears one entry in each of two parallel word tables. */
extern int D_001AB8D0[];
extern int D_001AB8D8[];

void func_0A44D8(int index)
{
    D_001AB8D0[index] = 0;
    D_001AB8D8[index] = 0;
}
