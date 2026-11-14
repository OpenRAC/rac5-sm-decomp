/* LEVEL_04:0x207378 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_00245AD0[];
extern void func_204540(int *p, unsigned int flag);

void func_207378(int *p, unsigned int flag)
{
    p[0] = (int)D_00245AD0;
    if (flag & 1)
        func_204540(p, flag & 1);
}
