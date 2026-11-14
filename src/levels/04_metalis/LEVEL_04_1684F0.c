/* LEVEL_04:0x1684F0 -- placement copy of LEVEL_01_159648.c: stores one hashed lookup result into two globals. */
extern int D_00220BE4;
extern int D_00220BFC;
extern int func_1364E8(unsigned int);

void func_1684F0(void)
{
    int v = func_1364E8(0x56B82993u);

    D_00220BE4 = v;
    D_00220BFC = v;
}
