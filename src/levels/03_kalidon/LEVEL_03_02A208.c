extern char D_0024FFC0[];
extern int func_023A10(void *ptr);
extern int func_02A1E8(int value);
extern int func_062340(void *ptr);
extern int func_087CA0(void);

int func_02A208(void)
{
    int n;

    n = *(int *)(func_023A10(D_0024FFC0) + 4);
    return func_02A1E8(7) == 0
        || n != 2
        || func_062340(D_0024FFC0) != 0
        || func_087CA0() == 0x100
        || func_087CA0() == 0x80;
}
