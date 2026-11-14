/* LEVEL_02:0x2027D8 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_002427C0[];
extern void func_200018(int *p, unsigned int flag);

void func_2027D8(int *p, unsigned int flag)
{
    p[0] = (int)D_002427C0;
    if (flag & 1)
        func_200018(p, flag & 1);
}
