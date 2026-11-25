/* LEVEL_05:0x0B41E0 -- placement copy of LEVEL_01_0B5C38.c: clears one entry in each of two parallel word tables. */
extern int D_001EBA50[];
extern int D_001EBA58[];

void func_0B41E0(int index)
{
    D_001EBA50[index] = 0;
    D_001EBA58[index] = 0;
}
