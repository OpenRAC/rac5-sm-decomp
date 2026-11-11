extern char *D_001DDDAC;
extern void func_0A4208(void);

int func_026438(int force)
{
    char *record = D_001DDDAC;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_0A4208();
        return 1;
    }
    return 0;
}
