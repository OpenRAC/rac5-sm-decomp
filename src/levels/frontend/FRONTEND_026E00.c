/* FRONTEND:0x026E00 -- placement copy of LEVEL_01_1ECA18.c: installs the table pointer in the object and, when the flag bit is set, hands the object to the next helper. */
extern char D_0010A020[];
extern void func_024180(int *p, unsigned int flag);

void func_026E00(int *p, unsigned int flag)
{
    p[0] = (int)D_0010A020;
    if (flag & 1)
        func_024180(p, flag & 1);
}
