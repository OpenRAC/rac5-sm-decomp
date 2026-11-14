/* LEVEL_24:0x0C13F0 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0D1288(void);
extern void func_12B210(char *record);

void func_0C13F0(char *record)
{
    if (func_0D1288() == 0)
        func_12B210(record);
}
