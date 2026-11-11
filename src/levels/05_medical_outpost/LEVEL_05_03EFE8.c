/* LEVEL_05:0x03EFE8 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_068C30(void *);
void func_03EFE8(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_068C30(record);
}
