/* FRONTEND:0x017B50 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_015778(void);
extern void func_0229D0(char *record);

void func_017B50(char *record)
{
    if (func_015778() == 0)
        func_0229D0(record);
}
