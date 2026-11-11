/* LEVEL_07:0x1FD240 -- placement copy of LEVEL_08_2300A8.c: runs a helper on two consecutive 0x18-byte records. */
extern void func_1FC910(char *);

void func_1FD240(char *record)
{
    char *end = record + 0x30;
    do {
        func_1FC910(record);
        record += 0x18;
    } while ((int)record < (int)end);
}
