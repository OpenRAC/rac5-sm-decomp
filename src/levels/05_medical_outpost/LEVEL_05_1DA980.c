/* LEVEL_05:0x1DA980 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_001F8960)(void);
extern void func_1DA9A8(void);

void func_1DA980(void)
{
    void (*fn)(void);

    fn = func_1DA9A8;
    D_001F8960 = fn;
    fn();
}
