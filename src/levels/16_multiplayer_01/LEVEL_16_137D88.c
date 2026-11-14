/* LEVEL_16:0x137D88 -- placement copy of LEVEL_01_159648.c: stores one hashed lookup result into two globals. */
extern int D_001BD71C;
extern int D_001BD734;
extern int func_106E98(unsigned int);

void func_137D88(void)
{
    int v = func_106E98(0x56B82993u);

    D_001BD71C = v;
    D_001BD734 = v;
}
