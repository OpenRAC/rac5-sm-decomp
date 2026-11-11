/* LEVEL_10:0x1F1FC8 -- placement copy of LEVEL_08_2300A8.c: runs a helper on two consecutive 0x18-byte records. */
extern void func_1F1698(char *);

void func_1F1FC8(char *record)
{
    char *end = record + 0x30;
    do {
        func_1F1698(record);
        record += 0x18;
    } while ((int)record < (int)end);
}
