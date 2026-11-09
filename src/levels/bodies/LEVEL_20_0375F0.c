/* LEVEL_20:0x0375F0 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_057098(void *);
void func_0375F0(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_057098(record);
}
