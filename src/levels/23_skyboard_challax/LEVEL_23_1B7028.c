/* LEVEL_23:0x1B7028 -- placement copy of LEVEL_08_2300A8.c: runs a helper on two consecutive 0x18-byte records. */
extern void func_1B66F8(char *);

void func_1B7028(char *record)
{
    char *end = record + 0x30;
    do {
        func_1B66F8(record);
        record += 0x18;
    } while ((int)record < (int)end);
}
