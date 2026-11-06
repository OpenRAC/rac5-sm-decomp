extern char *D_001A2F34;
extern void func_094B88(void);

int func_024480(int force)
{
    char *record = D_001A2F34;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_094B88();
        return 1;
    }
    return 0;
}
