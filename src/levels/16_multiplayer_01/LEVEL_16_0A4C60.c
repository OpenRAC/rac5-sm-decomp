/* LEVEL_16:0x0A4C60 -- placement copy of LEVEL_01_0B5C38.c: clears one entry in each of two parallel word tables. */
extern int D_001AA750[];
extern int D_001AA758[];

void func_0A4C60(int index)
{
    D_001AA750[index] = 0;
    D_001AA758[index] = 0;
}
