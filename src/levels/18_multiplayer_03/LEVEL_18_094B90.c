extern int D_001A5D30;
extern int D_001A5D34;
extern int func_094BC0(void);

int func_094B90(void)
{
    int second_value = D_001A5D34;
    return ((int (*)(int, int))func_094BC0)(D_001A5D30, second_value);
}
