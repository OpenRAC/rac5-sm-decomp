/* LEVEL_15:0x0A8170 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0B7F60(void);
extern void func_0F45D8(char *record);

void func_0A8170(char *record)
{
    if (func_0B7F60() == 0)
        func_0F45D8(record);
}
