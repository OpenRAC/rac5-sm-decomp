/* LEVEL_05:0x1D8368 -- placement copy of LEVEL_08_2300A8.c: runs a helper on two consecutive 0x18-byte records. */
extern void func_1D7A38(char *);

void func_1D8368(char *record)
{
    char *end = record + 0x30;
    do {
        func_1D7A38(record);
        record += 0x18;
    } while ((int)record < (int)end);
}
