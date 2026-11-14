/* LEVEL_10:0x1F6B98 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_00234680[];
extern void func_1F43D8(int *p, unsigned int flag);

void func_1F6B98(int *p, unsigned int flag)
{
    p[0] = (int)D_00234680;
    if (flag & 1)
        func_1F43D8(p, flag & 1);
}
