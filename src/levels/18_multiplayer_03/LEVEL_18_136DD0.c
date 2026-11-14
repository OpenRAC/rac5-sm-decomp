/* LEVEL_18:0x136DD0 -- placement copy of LEVEL_01_159648.c: stores one hashed lookup result into two globals. */
extern int D_001BEB9C;
extern int D_001BEBB4;
extern int func_105B48(unsigned int);

void func_136DD0(void)
{
    int v = func_105B48(0x56B82993u);

    D_001BEB9C = v;
    D_001BEBB4 = v;
}
