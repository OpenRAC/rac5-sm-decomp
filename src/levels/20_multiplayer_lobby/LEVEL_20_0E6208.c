extern char *func_0E5858(void);
extern int D_0011A920[];

int func_0E6208(void)
{
    char *record = func_0E5858();
    return D_0011A920[*(int *)(record + 0xfc8)];
}
