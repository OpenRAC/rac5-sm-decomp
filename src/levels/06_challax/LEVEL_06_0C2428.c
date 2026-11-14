/* LEVEL_06:0x0C2428 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0D2220(void);
extern void func_12BDE0(char *record);

void func_0C2428(char *record)
{
    if (func_0D2220() == 0)
        func_12BDE0(record);
}
