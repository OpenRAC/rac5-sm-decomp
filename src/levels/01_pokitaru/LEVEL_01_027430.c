extern char *D_001F3FAC;
extern void func_0A6F58(void);

int func_027430(int force)
{
    char *record = D_001F3FAC;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_0A6F58();
        return 1;
    }
    return 0;
}
