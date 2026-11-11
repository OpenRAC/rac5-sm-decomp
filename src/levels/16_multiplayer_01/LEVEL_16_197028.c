/* LEVEL_16:0x197028 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_001BEA30)(void);
extern void func_197050(void);

void func_197028(void)
{
    void (*fn)(void);

    fn = func_197050;
    D_001BEA30 = fn;
    fn();
}
