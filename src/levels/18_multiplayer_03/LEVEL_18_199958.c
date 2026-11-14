/* LEVEL_18:0x199958 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_001DA328[];
extern void func_1982C0(int *p, unsigned int flag);

void func_199958(int *p, unsigned int flag)
{
    p[0] = (int)D_001DA328;
    if (flag & 1)
        func_1982C0(p, flag & 1);
}
