extern char *D_002082AC;
extern void func_0A8F58(void);

int func_027790(int force)
{
    char *record = D_002082AC;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_0A8F58();
        return 1;
    }
    return 0;
}
