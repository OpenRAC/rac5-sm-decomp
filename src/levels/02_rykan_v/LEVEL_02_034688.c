/* LEVEL_02:0x034688 -- a helper writes a result byte into the object and a stack flag; a second helper runs; returns the flag byte. */
extern unsigned char func_034880(char *a0, int a1, unsigned char *a2);
extern void func_034A20(char *a0, int a1, int a2);

unsigned char func_034688(char *a0, int a1, int a2)
{
    unsigned char flag;

    flag = 0;
    a0[0x2C] = func_034880(a0, a1, &flag);
    func_034A20(a0, a1, a2);
    return flag;
}
