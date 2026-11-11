/* LEVEL_10:0x1F45E0 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_00212970)(void);
extern void func_1F4608(void);

void func_1F45E0(void)
{
    void (*fn)(void);

    fn = func_1F4608;
    D_00212970 = fn;
    fn();
}
