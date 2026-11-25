/* LEVEL_23:0x0ACA00 -- placement copy of LEVEL_01_0B5C38.c: clears one entry in each of two parallel word tables. */
extern int D_001CFAD0[];
extern int D_001CFAD8[];

void func_0ACA00(int index)
{
    D_001CFAD0[index] = 0;
    D_001CFAD8[index] = 0;
}
