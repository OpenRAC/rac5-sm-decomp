/* LEVEL_09:0x03D8C8 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_067BC8(void *);
void func_03D8C8(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_067BC8(record);
}
