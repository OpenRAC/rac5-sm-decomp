/* LEVEL_07:0x2025C8 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_00240BA0[];
extern void func_1FF6F8(int *p, unsigned int flag);

void func_2025C8(int *p, unsigned int flag)
{
    p[0] = (int)D_00240BA0;
    if (flag & 1)
        func_1FF6F8(p, flag & 1);
}
