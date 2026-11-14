/* LEVEL_24:0x1BD6F0 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_001F7178[];
extern void func_1BC058(int *p, unsigned int flag);

void func_1BD6F0(int *p, unsigned int flag)
{
    p[0] = (int)D_001F7178;
    if (flag & 1)
        func_1BC058(p, flag & 1);
}
