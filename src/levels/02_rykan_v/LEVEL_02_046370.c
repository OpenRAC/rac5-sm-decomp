/* LEVEL_02:0x046370 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_070060(void *);
void func_046370(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_070060(record);
}
