/* LEVEL_09:0x1D53F0 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_001F3668)(void);
extern void func_1D5418(void);

void func_1D53F0(void)
{
    void (*fn)(void);

    fn = func_1D5418;
    D_001F3668 = fn;
    fn();
}
