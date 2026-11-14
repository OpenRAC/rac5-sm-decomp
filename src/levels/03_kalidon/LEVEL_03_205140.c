/* LEVEL_03:0x205140 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_00246148[];
extern void func_203A10(int *p, unsigned int flag);

void func_205140(int *p, unsigned int flag)
{
    p[0] = (int)D_00246148;
    if (flag & 1)
        func_203A10(p, flag & 1);
}
