/* LEVEL_07:0x0C9B88 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0D9980(void);
extern void func_138710(char *record);

void func_0C9B88(char *record)
{
    if (func_0D9980() == 0)
        func_138710(record);
}
