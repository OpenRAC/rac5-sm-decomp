/* LEVEL_04:0x0BB440 -- placement copy of LEVEL_01_0B5C38.c: clears one entry in each of two parallel word tables. */
extern int D_00215B90[];
extern int D_00215B98[];

void func_0BB440(int index)
{
    D_00215B90[index] = 0;
    D_00215B98[index] = 0;
}
