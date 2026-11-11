/* LEVEL_23:0x03A7C8 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_064770(void *);
void func_03A7C8(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_064770(record);
}
