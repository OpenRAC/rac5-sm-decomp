/* LEVEL_17:0x03CD30 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_05D540(void *);
void func_03CD30(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_05D540(record);
}
