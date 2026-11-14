/* LEVEL_10:0x157650 -- placement copy of LEVEL_01_159648.c: stores one hashed lookup result into two globals. */
extern int D_002100D4;
extern int D_002100EC;
extern int func_127EC8(unsigned int);

void func_157650(void)
{
    int v = func_127EC8(0x56B82993u);

    D_002100D4 = v;
    D_002100EC = v;
}
