extern char *func_112478(void);
extern int D_001AB870[];

int func_112E60(void)
{
    char *record = func_112478();
    return D_001AB870[*(int *)(record + 0xfc8) + 1];
}
