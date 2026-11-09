/* LEVEL_01:0x0413E8 -- calls the helper unless the record state field equals 1. */
extern void func_06AFC8(void *);
void func_0413E8(char *record)
{
    if (*(int *)(record + 0x9a0) != 1)
        func_06AFC8(record);
}
