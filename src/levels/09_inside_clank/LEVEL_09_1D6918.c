/* LEVEL_09:0x1D6918 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_00212A38[];
extern void func_1D51E8(int *p, unsigned int flag);

void func_1D6918(int *p, unsigned int flag)
{
    p[0] = (int)D_00212A38;
    if (flag & 1)
        func_1D51E8(p, flag & 1);
}
