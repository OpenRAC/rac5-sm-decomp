/* LEVEL_07:0x032E50 -- placement copy of LEVEL_02_034688.c: a helper writes a result byte into the object and a stack flag; a second helper runs; returns the flag byte. */
extern unsigned char func_032EC8(char *a0, int a1, unsigned char *a2);
extern void func_033068(char *a0, int a1, int a2);

unsigned char func_032E50(char *a0, int a1, int a2)
{
    unsigned char flag;

    flag = 0;
    a0[0x2C] = func_032EC8(a0, a1, &flag);
    func_033068(a0, a1, a2);
    return flag;
}
