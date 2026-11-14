/* LEVEL_05:0x0C60D0 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0D5EC8(void);
extern void func_131088(char *record);

void func_0C60D0(char *record)
{
    if (func_0D5EC8() == 0)
        func_131088(record);
}
