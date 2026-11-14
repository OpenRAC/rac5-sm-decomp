/* LEVEL_22:0x0B5FD8 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0C5E60(void);
extern void func_10CBE0(char *record);

void func_0B5FD8(char *record)
{
    if (func_0C5E60() == 0)
        func_10CBE0(record);
}
