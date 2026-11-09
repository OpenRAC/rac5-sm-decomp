/* LEVEL_03:0x03F6A8 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_069950(void *);
void func_03F6A8(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_069950(record);
}
