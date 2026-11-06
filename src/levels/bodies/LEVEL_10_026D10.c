extern char *D_001FCFAC;
extern void func_0A8070(void);

int func_026D10(int force)
{
    char *record = D_001FCFAC;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_0A8070();
        return 1;
    }
    return 0;
}
