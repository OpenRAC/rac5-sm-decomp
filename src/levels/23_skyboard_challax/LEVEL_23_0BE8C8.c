/* LEVEL_23:0x0BE8C8 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0CE750(void);
extern void func_126E88(char *record);

void func_0BE8C8(char *record)
{
    if (func_0CE750() == 0)
        func_126E88(record);
}
