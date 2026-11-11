/* LEVEL_18:0x03BD10 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_05C618(void *);
void func_03BD10(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_05C618(record);
}
