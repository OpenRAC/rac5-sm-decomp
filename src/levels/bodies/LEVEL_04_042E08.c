/* LEVEL_04:0x042E08 -- placement copy of LEVEL_01_0413E8.c: calls the helper unless the record state field equals 1. */
extern void func_06CA30(void *);
void func_042E08(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_06CA30(record);
}
