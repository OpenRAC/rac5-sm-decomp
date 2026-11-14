/* LEVEL_20:0x0FABE8 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_00131930[];
extern void func_0F9550(int *p, unsigned int flag);

void func_0FABE8(int *p, unsigned int flag)
{
    p[0] = (int)D_00131930;
    if (flag & 1)
        func_0F9550(p, flag & 1);
}
