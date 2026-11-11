/* LEVEL_06:0x1DA4D0 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_001F88A0)(void);
extern void func_1DA4F8(void);

void func_1DA4D0(void)
{
    void (*fn)(void);

    fn = func_1DA4F8;
    D_001F88A0 = fn;
    fn();
}
