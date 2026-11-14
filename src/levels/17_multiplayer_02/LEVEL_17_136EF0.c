/* LEVEL_17:0x136EF0 -- placement copy of LEVEL_01_159648.c: stores one hashed lookup result into two globals. */
extern int D_001B0D0C;
extern int D_001B0D24;
extern int func_106410(unsigned int);

void func_136EF0(void)
{
    int v = func_106410(0x56B82993u);

    D_001B0D0C = v;
    D_001B0D24 = v;
}
