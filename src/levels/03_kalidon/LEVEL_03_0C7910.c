/* LEVEL_03:0x0C7910 -- placement copy of LEVEL_01_0C7B28.c: runs the cleanup helper on the record when the check helper reports zero. */
extern int func_0D7708(void);
extern void func_133AD8(char *record);

void func_0C7910(char *record)
{
    if (func_0D7708() == 0)
        func_133AD8(record);
}
