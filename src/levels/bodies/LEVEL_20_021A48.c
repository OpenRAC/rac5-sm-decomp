extern char *D_00104194;
extern void func_080270(void);

int func_021A48(int force)
{
    char *record = D_00104194;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_080270();
        return 1;
    }
    return 0;
}
