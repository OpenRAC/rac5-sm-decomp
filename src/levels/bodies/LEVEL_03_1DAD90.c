/* LEVEL_03:0x1DAD90 -- placement copy of LEVEL_01_1CA9B8.c: passes a word from a global record, shifted left 16 and OR'd with a constant, to two helpers at two fixed addresses. */
extern char D_003B3920[];
extern char D_00221E98[];
extern char D_002B2C40[];
extern void func_1FC100(char *a0, unsigned int a1);
extern void func_1FB050(char *a0, unsigned int a1);

void func_1DAD90(void)
{
    char *p;

    p = D_002B2C40;
    func_1FC100(D_003B3920, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
    func_1FB050(D_00221E98, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
}
