extern char *D_001668A4;

void func_12FD70(char *record)
{
    char *value;
    if (record == 0)
        record = D_001668A4;
    if (record == 0)
        return;
    value = *(char **)(record + 0x58);
    value[0xb6] = 1;
}
