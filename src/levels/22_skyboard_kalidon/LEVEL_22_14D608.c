/* LEVEL_22:0x14D608 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_0017CEB8[];
extern void func_14A738(int *p, unsigned int flag);

void func_14D608(int *p, unsigned int flag)
{
    p[0] = (int)D_0017CEB8;
    if (flag & 1)
        func_14A738(p, flag & 1);
}
