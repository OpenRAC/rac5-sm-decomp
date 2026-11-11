extern char *D_00148C2C;
extern void func_087820(void);

int func_021420(int force)
{
    char *record = D_00148C2C;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_087820();
        return 1;
    }
    return 0;
}
