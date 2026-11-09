/* LEVEL_07:0x0419B8 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_06BCD0(void *);
void func_0419B8(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_06BCD0(record);
}
