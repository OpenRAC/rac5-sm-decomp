/* LEVEL_19:0x03C760 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_05CF70(void *);
void func_03C760(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_05CF70(record);
}
