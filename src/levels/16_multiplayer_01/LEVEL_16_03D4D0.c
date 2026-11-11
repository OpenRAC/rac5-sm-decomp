/* LEVEL_16:0x03D4D0 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_05DB10(void *);
void func_03D4D0(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_05DB10(record);
}
