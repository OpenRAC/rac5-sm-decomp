/* LEVEL_24:0x0AF4C8 -- placement copy of LEVEL_01_0B5C38.c: clears one entry in each of two parallel word tables. */
extern int D_001CD350[];
extern int D_001CD358[];

void func_0AF4C8(int index)
{
    D_001CD350[index] = 0;
    D_001CD358[index] = 0;
}
