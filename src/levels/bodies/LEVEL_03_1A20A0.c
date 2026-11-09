/* LEVEL_03:0x1A20A0 -- when a record's mode byte is below 0x24 and its state byte is not 2, sets a field of its sub-record and calls a helper. */
extern void func_19FDD0(char *, int);

void func_1A20A0(char *record)
{
    char *sub = *(char **)(record + 0x54);

    if ((unsigned char)record[0x45] < 0x24) {
        if ((unsigned char)record[0x46] != 2) {
            sub[0x9e] = 0x15;
            func_19FDD0(record, 0x13);
        }
    }
}
