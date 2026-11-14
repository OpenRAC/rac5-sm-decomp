/* LEVEL_19:0x19AEB8 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_001DA160[];
extern void func_197FE8(int *p, unsigned int flag);

void func_19AEB8(int *p, unsigned int flag)
{
    p[0] = (int)D_001DA160;
    if (flag & 1)
        func_197FE8(p, flag & 1);
}
