/* LEVEL_24:0x03A3D0 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_064608(void *);
void func_03A3D0(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_064608(record);
}
