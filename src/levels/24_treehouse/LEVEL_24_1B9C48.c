/* LEVEL_24:0x1B9C48 -- placement copy of LEVEL_08_2300A8.c: runs a helper on two consecutive 0x18-byte records. */
extern void func_1B9318(char *);

void func_1B9C48(char *record)
{
    char *end = record + 0x30;
    do {
        func_1B9318(record);
        record += 0x18;
    } while ((int)record < (int)end);
}
