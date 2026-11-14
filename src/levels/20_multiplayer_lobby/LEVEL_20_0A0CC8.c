/* LEVEL_20:0x0A0CC8 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0B1548(void);
extern void func_0E4BC8(char *record);

void func_0A0CC8(char *record)
{
    if (func_0B1548() == 0)
        func_0E4BC8(record);
}
