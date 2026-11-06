extern char *D_001950B4;
extern void func_095070(void);

int func_024850(int force)
{
    char *record = D_001950B4;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_095070();
        return 1;
    }
    return 0;
}
