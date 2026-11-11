/* LEVEL_04:0x202130 -- placement copy of LEVEL_08_2300A8.c: runs a helper on two consecutive 0x18-byte records. */
extern void func_201800(char *);

void func_202130(char *record)
{
    char *end = record + 0x30;
    do {
        func_201800(record);
        record += 0x18;
    } while ((int)record < (int)end);
}
