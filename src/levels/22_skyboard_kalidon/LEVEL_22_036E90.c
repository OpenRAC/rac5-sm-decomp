/* LEVEL_22:0x036E90 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_060BA8(void *);
void func_036E90(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_060BA8(record);
}
