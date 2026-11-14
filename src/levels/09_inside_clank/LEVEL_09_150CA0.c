/* LEVEL_09:0x150CA0 -- placement copy of LEVEL_01_159648.c: stores one hashed lookup result into two globals. */
extern int D_001F0F54;
extern int D_001F0F6C;
extern int func_123000(unsigned int);

void func_150CA0(void)
{
    int v = func_123000(0x56B82993u);

    D_001F0F54 = v;
    D_001F0F6C = v;
}
