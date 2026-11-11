extern char *D_001668A4;

void func_12FDD0(char *record)
{
    if (record == 0)
        record = D_001668A4;
    if (record != 0) {
        char *value = *(char **)(record + 0x58);
        ++value[0xba];
    }
}
