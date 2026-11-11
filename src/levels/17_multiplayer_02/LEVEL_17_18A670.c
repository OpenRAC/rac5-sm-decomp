/* LEVEL_17:0x18A670 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_001B1F08)(void);
extern void func_18A698(void);

void func_18A670(void)
{
    void (*fn)(void);

    fn = func_18A698;
    D_001B1F08 = fn;
    fn();
}
