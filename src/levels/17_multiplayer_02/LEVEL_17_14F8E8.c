/* LEVEL_17:0x14F8E8 -- clears the nested record's first word and byte 0x64, runs the cleanup and returns state 3. */
extern void func_1505B8(char *a0);

int func_14F8E8(char *object)
{
    char *rec = *(char **)(object + 0x58);
    *(int *)rec = 0;
    rec[0x64] = 0;
    func_1505B8(object);
    return 3;
}
