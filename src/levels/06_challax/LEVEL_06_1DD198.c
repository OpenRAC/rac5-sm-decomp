/* LEVEL_06:0x1DD198 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_00218010[];
extern void func_1DA2C8(int *p, unsigned int flag);

void func_1DD198(int *p, unsigned int flag)
{
    p[0] = (int)D_00218010;
    if (flag & 1)
        func_1DA2C8(p, flag & 1);
}
