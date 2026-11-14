/* LEVEL_19:0x137AC0 -- placement copy of LEVEL_01_159648.c: stores one hashed lookup result into two globals. */
extern int D_001BE884;
extern int D_001BE89C;
extern int func_107538(unsigned int);

void func_137AC0(void)
{
    int v = func_107538(0x56B82993u);

    D_001BE884 = v;
    D_001BE89C = v;
}
