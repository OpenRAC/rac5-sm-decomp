/* LEVEL_23:0x1BE9C8 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_001DCC58)(void);
extern void func_1BE9F0(void);

void func_1BE9C8(void)
{
    void (*fn)(void);

    fn = func_1BE9F0;
    D_001DCC58 = fn;
    fn();
}
