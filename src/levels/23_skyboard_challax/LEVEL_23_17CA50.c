extern char *D_001DBE24;

void func_17CA50(char *record)
{
    char *value;
    if (record == 0)
        record = D_001DBE24;
    if (record == 0)
        return;
    value = *(char **)(record + 0x58);
    value[0xb6] = 1;
}
