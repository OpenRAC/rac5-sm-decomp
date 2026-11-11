/* LEVEL_18:0x1984C8 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_001BFFF0)(void);
extern void func_1984F0(void);

void func_1984C8(void)
{
    void (*fn)(void);

    fn = func_1984F0;
    D_001BFFF0 = fn;
    fn();
}
