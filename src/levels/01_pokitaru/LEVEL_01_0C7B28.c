/* LEVEL_01:0x0C7B28 -- runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0D7920(void);
extern void func_135710(char *record);

void func_0C7B28(char *record)
{
    if (func_0D7920() == 0)
        func_135710(record);
}
