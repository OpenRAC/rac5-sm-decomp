/* LEVEL_19:0x0B6070 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0C68F0(void);
extern void func_112480(char *record);

void func_0B6070(char *record)
{
    if (func_0C68F0() == 0)
        func_112480(record);
}
