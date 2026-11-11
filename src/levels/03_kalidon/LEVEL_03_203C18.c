/* LEVEL_03:0x203C18 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_002228C0)(void);
extern void func_203C40(void);

void func_203C18(void)
{
    void (*fn)(void);

    fn = func_203C40;
    D_002228C0 = fn;
    fn();
}
