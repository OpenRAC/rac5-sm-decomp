/* LEVEL_22:0x14A940 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_001670A8)(void);
extern void func_14A968(void);

void func_14A940(void)
{
    void (*fn)(void);

    fn = func_14A968;
    D_001670A8 = fn;
    fn();
}
