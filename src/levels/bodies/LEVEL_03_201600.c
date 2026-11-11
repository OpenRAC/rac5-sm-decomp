/* LEVEL_03:0x201600 -- placement copy of LEVEL_08_2300A8.c: runs a helper on two consecutive 0x18-byte records. */
extern void func_200CD0(char *);

void func_201600(char *record)
{
    char *end = record + 0x30;
    do {
        func_200CD0(record);
        record += 0x18;
    } while ((int)record < (int)end);
}
