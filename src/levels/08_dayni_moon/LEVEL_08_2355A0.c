/* LEVEL_08:0x2355A0 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_0027A540[];
extern void func_233F08(int *p, unsigned int flag);

void func_2355A0(int *p, unsigned int flag)
{
    p[0] = (int)D_0027A540;
    if (flag & 1)
        func_233F08(p, flag & 1);
}
