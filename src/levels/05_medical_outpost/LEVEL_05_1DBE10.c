/* LEVEL_05:0x1DBE10 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_00216FC0[];
extern void func_1DA778(int *p, unsigned int flag);

void func_1DBE10(int *p, unsigned int flag)
{
    p[0] = (int)D_00216FC0;
    if (flag & 1)
        func_1DA778(p, flag & 1);
}
