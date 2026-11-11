extern char D_00220E40[];
extern int func_022C40(void *ptr);
extern int func_029068(int value);
extern int func_061620(void *ptr);
extern int func_0857A0(void);

int func_029088(void)
{
    int n;

    n = *(int *)(func_022C40(D_00220E40) + 4);
    return func_029068(7) == 0
        || n != 2
        || func_061620(D_00220E40) != 0
        || func_0857A0() == 0x100
        || func_0857A0() == 0x80;
}
