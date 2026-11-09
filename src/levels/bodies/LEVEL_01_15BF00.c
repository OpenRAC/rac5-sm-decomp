/* LEVEL_01:0x15BF00 -- stores 4 in a nested record field, then calls a helper with a zero float pair. */
extern void func_07CD28(char *, int, int, int, float, float);

void func_15BF00(char *record)
{
    char *nested = *(char **)(record + 0x58);
    *(int *)(nested + 0x60) = 4;
    func_07CD28(record, 0xe, 0, 1, 0.0f, 0.0f);
}
