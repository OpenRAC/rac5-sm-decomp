/* LEVEL_01:0x1E8F70 -- placement copy of LEVEL_08_2300A8.c: runs a helper on two consecutive 0x18-byte records. */
extern void func_1E8640(char *);

void func_1E8F70(char *record)
{
    char *end = record + 0x30;
    do {
        func_1E8640(record);
        record += 0x18;
    } while ((int)record < (int)end);
}
