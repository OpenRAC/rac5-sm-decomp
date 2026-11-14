/* LEVEL_06:0x14EDD8 -- placement copy of LEVEL_01_159648.c: stores one hashed lookup result into two globals. */
extern int D_001F605C;
extern int D_001F6074;
extern int func_1206C0(unsigned int);

void func_14EDD8(void)
{
    int v = func_1206C0(0x56B82993u);

    D_001F605C = v;
    D_001F6074 = v;
}
