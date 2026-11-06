extern char *D_001C4C2C;
extern void func_0A07D0(void);

int func_024D60(int force)
{
    char *record = D_001C4C2C;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_0A07D0();
        return 1;
    }
    return 0;
}
