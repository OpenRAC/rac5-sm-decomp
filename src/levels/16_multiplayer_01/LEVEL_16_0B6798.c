/* LEVEL_16:0x0B6798 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0C7018(void);
extern void func_111DE0(char *record);

void func_0B6798(char *record)
{
    if (func_0C7018() == 0)
        func_111DE0(record);
}
