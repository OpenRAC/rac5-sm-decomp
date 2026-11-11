extern char *D_001DBE24;

void func_17CAB0(char *record)
{
    if (record == 0)
        record = D_001DBE24;
    if (record != 0) {
        char *value = *(char **)(record + 0x58);
        ++value[0xba];
    }
}
