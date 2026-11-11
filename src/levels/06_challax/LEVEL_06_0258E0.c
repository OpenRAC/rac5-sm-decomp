extern char *D_001E2EAC;
extern void func_0A1728(void);

int func_0258E0(int force)
{
    char *record = D_001E2EAC;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_0A1728();
        return 1;
    }
    return 0;
}
