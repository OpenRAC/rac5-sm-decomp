extern char *D_00027E9C;
extern void func_014F58(void);

int func_0032E8(int force)
{
    char *record = D_00027E9C;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_014F58();
        return 1;
    }
    return 0;
}
