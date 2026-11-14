/* LEVEL_23:0x1C15F8 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_001F8748[];
extern void func_1BE7C0(int *p, unsigned int flag);

void func_1C15F8(int *p, unsigned int flag)
{
    p[0] = (int)D_001F8748;
    if (flag & 1)
        func_1BE7C0(p, flag & 1);
}
