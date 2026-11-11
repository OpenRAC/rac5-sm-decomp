extern char *D_001A2C34;
extern void func_095408(void);

int func_024A78(int force)
{
    char *record = D_001A2C34;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_095408();
        return 1;
    }
    return 0;
}
