/* LEVEL_02:0x0CE438 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0DE2B0(void);
extern void func_13BAC0(char *record);

void func_0CE438(char *record)
{
    if (func_0DE2B0() == 0)
        func_13BAC0(record);
}
