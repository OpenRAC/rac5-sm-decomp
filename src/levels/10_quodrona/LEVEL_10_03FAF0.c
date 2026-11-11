/* LEVEL_10:0x03FAF0 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_069DF8(void *);
void func_03FAF0(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_069DF8(record);
}
