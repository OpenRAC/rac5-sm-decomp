/* LEVEL_23:0x1558F8 -- placement copy of LEVEL_01_159648.c: stores one hashed lookup result into two globals. */
extern int D_001DAC14;
extern int D_001DAC2C;
extern int func_11AEE0(unsigned int);

void func_1558F8(void)
{
    int v = func_11AEE0(0x56B82993u);

    D_001DAC14 = v;
    D_001DAC2C = v;
}
