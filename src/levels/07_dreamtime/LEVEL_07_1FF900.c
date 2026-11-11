/* LEVEL_07:0x1FF900 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_0021E6C8)(void);
extern void func_1FF928(void);

void func_1FF900(void)
{
    void (*fn)(void);

    fn = func_1FF928;
    D_0021E6C8 = fn;
    fn();
}
