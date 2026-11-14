/* LEVEL_05:0x152E48 -- placement copy of LEVEL_01_159648.c: stores one hashed lookup result into two globals. */
extern int D_001F64CC;
extern int D_001F64E4;
extern int func_1259E0(unsigned int);

void func_152E48(void)
{
    int v = func_1259E0(0x56B82993u);

    D_001F64CC = v;
    D_001F64E4 = v;
}
