/* LEVEL_08:0x2300A8 -- runs a helper on two consecutive 0x18-byte records. */
extern void func_22F5E0(char *);

void func_2300A8(char *record)
{
    char *end = record + 0x30;
    do {
        func_22F5E0(record);
        record += 0x18;
    } while ((int)record < (int)end);
}
