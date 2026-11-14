/* LEVEL_24:0x14DB28 -- placement copy of LEVEL_01_159648.c: stores one hashed lookup result into two globals. */
extern int D_001D83FC;
extern int D_001D8414;
extern int func_11FB68(unsigned int);

void func_14DB28(void)
{
    int v = func_11FB68(0x56B82993u);

    D_001D83FC = v;
    D_001D8414 = v;
}
