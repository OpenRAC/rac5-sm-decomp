/* LEVEL_08:0x0464F0 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_070810(void *);
void func_0464F0(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_070810(record);
}
