/* LEVEL_15:0x096148 -- placement copy of LEVEL_01_0B5C38.c: clears one entry in each of two parallel word tables. */
extern int D_00151350[];
extern int D_00151358[];

void func_096148(int index)
{
    D_00151350[index] = 0;
    D_00151358[index] = 0;
}
