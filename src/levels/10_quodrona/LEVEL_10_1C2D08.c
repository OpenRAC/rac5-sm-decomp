/* LEVEL_10:0x1C2D08 -- placement copy of LEVEL_01_1B5480.c: true when the record's entry has the flag bit set and the lookup helper rejects it. */
extern int func_1C2CB8(char *obj, int id);

long long func_1C2D08(char *obj, char *record)
{
    long long active;
    int rejected;
    char *nested = *(char **)(record + 0x40);
    char *entry = *(char **)(nested + 0x10);

    active = 0;
    if ((*(unsigned int *)(entry + 0x3C) & 4) != 0) {
        rejected = func_1C2CB8(obj, (int)record) == 0;
        active = rejected;
    }
    return active;
}
