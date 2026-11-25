/* LEVEL_01:0x0B5C38 -- clears one entry in each of two parallel word tables. */
extern int D_001FC6D0[];
extern int D_001FC6D8[];

void func_0B5C38(int index)
{
    D_001FC6D0[index] = 0;
    D_001FC6D8[index] = 0;
}
