/* LEVEL_10:0x0C8F68 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0D8D60(void);
extern void func_133590(char *record);

void func_0C8F68(char *record)
{
    if (func_0D8D60() == 0)
        func_133590(record);
}
