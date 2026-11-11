extern char *D_0023CB2C;
extern void func_0B1850(void);

int func_027A58(int force)
{
    char *record = D_0023CB2C;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_0B1850();
        return 1;
    }
    return 0;
}
