extern char D_0017D2C0[];
extern int func_01E130(void *ptr);
extern int func_023BC8(int value);
extern int func_054C48(void *ptr);
extern int func_06C528(void);

int func_023BE8(void)
{
    int n;

    n = *(int *)(func_01E130(D_0017D2C0) + 4);
    return func_023BC8(7) == 0
        || n != 2
        || func_054C48(D_0017D2C0) != 0
        || func_06C528() == 0x100
        || func_06C528() == 0x80;
}
