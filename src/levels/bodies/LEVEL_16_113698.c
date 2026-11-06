extern char *func_112CE8(void);
extern int D_001B8270[];

int func_113698(void)
{
    char *record = func_112CE8();
    return D_001B8270[*(int *)(record + 0xfc8)];
}
