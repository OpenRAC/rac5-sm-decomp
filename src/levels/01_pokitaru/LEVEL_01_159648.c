/* LEVEL_01:0x159648 -- stores one hashed lookup result into two globals. */
extern int D_00207474;
extern int D_0020748C;
extern int func_12A068(unsigned int);

void func_159648(void)
{
    int v = func_12A068(0x56B82993u);

    D_00207474 = v;
    D_0020748C = v;
}
