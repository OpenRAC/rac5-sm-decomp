/* LEVEL_17:0x0B5CD8 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0C6558(void);
extern void func_111358(char *record);

void func_0B5CD8(char *record)
{
    if (func_0C6558() == 0)
        func_111358(record);
}
