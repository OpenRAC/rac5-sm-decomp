/* LEVEL_06:0x1D7EB8 -- placement copy of LEVEL_08_2300A8.c: runs a helper on two consecutive 0x18-byte records. */
extern void func_1D7588(char *);

void func_1D7EB8(char *record)
{
    char *end = record + 0x30;
    do {
        func_1D7588(record);
        record += 0x18;
    } while ((int)record < (int)end);
}
