/* LEVEL_09:0x0C4DD8 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0D4BD0(void);
extern void func_12E6A8(char *record);

void func_0C4DD8(char *record)
{
    if (func_0D4BD0() == 0)
        func_12E6A8(record);
}
