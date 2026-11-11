/* LEVEL_15:0x0333D0 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_05BFF0(void *);
void func_0333D0(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_05BFF0(record);
}
