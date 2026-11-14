/* LEVEL_08:0x0D2A50 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0E28F0(void);
extern void func_146C48(char *record);

void func_0D2A50(char *record)
{
    if (func_0E28F0() == 0)
        func_146C48(record);
}
