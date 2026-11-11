extern char D_0021C8C0[];
extern int func_022E38(void *ptr);
extern int func_029258(int value);
extern int func_0605B8(void *ptr);
extern int func_084800(void);

int func_029278(void)
{
    int n;

    n = *(int *)(func_022E38(D_0021C8C0) + 4);
    return func_029258(7) == 0
        || n != 2
        || func_0605B8(D_0021C8C0) != 0
        || func_084800() == 0x100
        || func_084800() == 0x80;
}
