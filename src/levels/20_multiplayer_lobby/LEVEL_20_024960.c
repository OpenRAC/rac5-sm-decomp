extern char D_0013BA10[];
extern int func_01E440(void *ptr);
extern int func_024940(int value);
extern int func_04F9C0(void *ptr);
extern int func_066FF8(void);

int func_024960(void)
{
    int n;

    n = *(int *)(func_01E440(D_0013BA10) + 4);
    return func_024940(7) == 0
        || n != 2
        || func_04F9C0(D_0013BA10) != 0
        || func_066FF8() == 0x100
        || func_066FF8() == 0x80;
}
