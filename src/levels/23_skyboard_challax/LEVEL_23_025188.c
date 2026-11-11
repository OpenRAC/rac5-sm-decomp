extern char *D_001C73AC;
extern void func_09DCC8(void);

int func_025188(int force)
{
    char *record = D_001C73AC;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_09DCC8();
        return 1;
    }
    return 0;
}
