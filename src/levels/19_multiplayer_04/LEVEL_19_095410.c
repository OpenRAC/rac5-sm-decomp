extern int D_001A5A30;
extern int D_001A5A34;
extern int func_095440(void);

int func_095410(void)
{
    int second_value = D_001A5A34;
    return ((int (*)(int, int))func_095440)(D_001A5A30, second_value);
}
