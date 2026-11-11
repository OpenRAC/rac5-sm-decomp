/* LEVEL_02:0x200220 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_0021E938)(void);
extern void func_200248(void);

void func_200220(void)
{
    void (*fn)(void);

    fn = func_200248;
    D_0021E938 = fn;
    fn();
}
