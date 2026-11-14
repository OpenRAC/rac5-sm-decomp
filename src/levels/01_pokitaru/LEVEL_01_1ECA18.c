/* LEVEL_01:0x1ECA18 -- installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_0022B2C8[];
extern void func_1EB380(int *p, unsigned int flag);

void func_1ECA18(int *p, unsigned int flag)
{
    p[0] = (int)D_0022B2C8;
    if (flag & 1)
        func_1EB380(p, flag & 1);
}
