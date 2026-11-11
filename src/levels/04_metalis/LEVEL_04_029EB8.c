extern char D_0024F950[];
extern int func_023928(void *ptr);
extern int func_029E98(int value);
extern int func_065420(void *ptr);
extern int func_08B0E0(void);

int func_029EB8(void)
{
    int n;

    n = *(int *)(func_023928(D_0024F950) + 4);
    return func_029E98(7) == 0
        || n != 2
        || func_065420(D_0024F950) != 0
        || func_08B0E0() == 0x100
        || func_08B0E0() == 0x80;
}
