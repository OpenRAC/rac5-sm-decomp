extern char *D_001A1AB4;
extern void func_095B78(void);

int func_024ED0(int force)
{
    char *record = D_001A1AB4;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_095B78();
        return 1;
    }
    return 0;
}
