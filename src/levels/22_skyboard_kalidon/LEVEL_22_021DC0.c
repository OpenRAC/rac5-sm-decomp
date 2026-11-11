extern char *D_0015332C;
extern void func_095568(void);

int func_021DC0(int force)
{
    char *record = D_0015332C;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_095568();
        return 1;
    }
    return 0;
}
