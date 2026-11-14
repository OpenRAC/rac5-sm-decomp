/* LEVEL_08:0x16FF78 -- placement copy of LEVEL_01_159648.c: stores one hashed lookup result into two globals. */
extern int D_002506AC;
extern int D_002506C4;
extern int func_13B5A0(unsigned int);

void func_16FF78(void)
{
    int v = func_13B5A0(0x56B82993u);

    D_002506AC = v;
    D_002506C4 = v;
}
