/* LEVEL_06:0x03DB10 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_067D88(void *);
void func_03DB10(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_067D88(record);
}
