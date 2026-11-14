/* LEVEL_16:0x1995E0 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_001D9FB0[];
extern void func_196E20(int *p, unsigned int flag);

void func_1995E0(int *p, unsigned int flag)
{
    p[0] = (int)D_001D9FB0;
    if (flag & 1)
        func_196E20(p, flag & 1);
}
