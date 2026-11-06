extern char D_002843D0[];
extern int func_0243C0(void *ptr);
extern int func_02A968(int value);
extern int func_0691E0(void *ptr);
extern int func_08FE98(void);

int func_02A988(void)
{
    int n;

    n = *(int *)(func_0243C0(D_002843D0) + 4);
    return func_02A968(7) == 0
        || n != 2
        || func_0691E0(D_002843D0) != 0
        || func_08FE98() == 0x100
        || func_08FE98() == 0x80;
}
