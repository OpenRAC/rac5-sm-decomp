/* LEVEL_20:0x0F9758 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_0011FC40)(void);
extern void func_0F9780(void);

void func_0F9758(void)
{
    void (*fn)(void);

    fn = func_0F9780;
    D_0011FC40 = fn;
    fn();
}
