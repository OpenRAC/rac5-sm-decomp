extern char *D_00208C2C;
extern void func_0AD868(void);

int func_027C18(int force)
{
    char *record = D_00208C2C;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_0AD868();
        return 1;
    }
    return 0;
}
