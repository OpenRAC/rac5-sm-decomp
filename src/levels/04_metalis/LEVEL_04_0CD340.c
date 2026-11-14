/* LEVEL_04:0x0CD340 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0DD1E0(void);
extern void func_141B90(char *record);

void func_0CD340(char *record)
{
    if (func_0DD1E0() == 0)
        func_141B90(record);
}
