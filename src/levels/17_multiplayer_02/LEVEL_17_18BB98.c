/* LEVEL_17:0x18BB98 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_001CB2C0[];
extern void func_18A468(int *p, unsigned int flag);

void func_18BB98(int *p, unsigned int flag)
{
    p[0] = (int)D_001CB2C0;
    if (flag & 1)
        func_18A468(p, flag & 1);
}
