/* LEVEL_03:0x0B5A20 -- placement copy of LEVEL_01_0B5C38.c: clears one entry in each of two parallel word tables. */
extern int D_00214D50[];
extern int D_00214D58[];

void func_0B5A20(int index)
{
    D_00214D50[index] = 0;
    D_00214D58[index] = 0;
}
