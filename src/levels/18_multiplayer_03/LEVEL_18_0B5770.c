/* LEVEL_18:0x0B5770 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0C5FF0(void);
extern void func_110A90(char *record);

void func_0B5770(char *record)
{
    if (func_0C5FF0() == 0)
        func_110A90(record);
}
