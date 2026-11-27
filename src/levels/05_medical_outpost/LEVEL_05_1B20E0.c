/* LEVEL_05:0x1B20E0 -- placement copy of LEVEL_01_1B5480.c: true when the record's entry has the flag bit set and the lookup helper rejects it. */
extern int func_1B2090(char *obj, int id);

long long func_1B20E0(char *obj, char *record)
{
    long long active;
    int rejected;
    char *nested = *(char **)(record + 0x40);
    char *entry = *(char **)(nested + 0x10);

    active = 0;
    if ((*(unsigned int *)(entry + 0x3C) & 4) != 0) {
        rejected = func_1B2090(obj, (int)record) == 0;
        active = rejected;
    }
    return active;
}
