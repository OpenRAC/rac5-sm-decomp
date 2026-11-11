/* LEVEL_21:0x140280 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_0015E3D8)(void);
extern void func_1402A8(void);

void func_140280(void)
{
    void (*fn)(void);

    fn = func_1402A8;
    D_0015E3D8 = fn;
    fn();
}
