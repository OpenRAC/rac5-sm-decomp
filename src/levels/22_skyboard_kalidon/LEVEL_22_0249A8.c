extern char D_00186D40[];
extern int func_01EBE8(void *ptr);
extern int func_024988(int value);
extern int func_0595C0(void *ptr);
extern int func_079260(void);

int func_0249A8(void)
{
    int n;

    n = *(int *)(func_01EBE8(D_00186D40) + 4);
    return func_024988(7) == 0
        || n != 2
        || func_0595C0(D_00186D40) != 0
        || func_079260() == 0x100
        || func_079260() == 0x80;
}
