/* LEVEL_15:0x141710 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_001733F0[];
extern void func_140078(int *p, unsigned int flag);

void func_141710(int *p, unsigned int flag)
{
    p[0] = (int)D_001733F0;
    if (flag & 1)
        func_140078(p, flag & 1);
}
